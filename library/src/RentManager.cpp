//
// Created by pobi on 15.01.19.
//

#include "RentManager.h"

void RentManager::rent(Space_ptr space, Client_ptr client) {
    if(current_rents.find(space->getID())!= nullptr){
        throw RentException("miejsce jest juz wypozyczone");
    }else if(client->maxRents()<client->countRents()){
        throw RentException("klient przekroczyl liczbe wypozyczen");
    }
    else {
        current_rents.create(Rent_ptr(new Rent(client, space)));
        client->addRents();
    }
}

void RentManager::endRent(Rent_ptr rent) {
    if(current_rents.find(rent->getID()) == nullptr){
        throw RentException("wypozyczenie nie istnieje");
    }else{
        Rent_ptr ptr = current_rents.find(rent->getID());
        current_rents.remove(ptr);
        archived_rents.create(ptr);
        ptr->getClient()->remRents();
    }
}