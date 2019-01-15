//
// Created by pobi on 15.01.19.
//

#include "RentManager.h"

void RentManager::rent(Space_ptr space, Client_ptr client) {
    if(current_rents.find(space->getSpaceID())!= nullptr){
        throw RentException("miejsce jest juz wypozyczone");
    }else if(client->maxRents()<client->countRents()){
        throw RentException("klient przekroczyl liczbe wypozyczen");
    }
    else {
        current_rents.create(Rent_ptr(new Rent(client, space)));
        client->addRents();
    }
}

void RentManager::endRent(Space_ptr space) {
    if(current_rents.find(space->getSpaceID()) == nullptr){
        throw RentException("miejsce nie zostalo wypozyczone");
    }else{
        Rent_ptr ptr = current_rents.find(space->getSpaceID());
        current_rents.remove(ptr);
        archived_rents.create(ptr);
    }
}