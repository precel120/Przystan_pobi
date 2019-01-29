//
// Created by pobi on 15.01.19.
//

#include "RentManager.h"

void RentManager::rent(Rent_ptr rent) {
    if(current_rents.findMe(rent) != nullptr){
        throw RentException("wypozyczenie juz istnieje");
    }else if(rent->getClient()->maxRents() < rent->getClient()->countRents()+1){
        throw RentException("klient przekroczyl liczbe wypozyczen");
    }
    else {
        current_rents.create(rent);
        rent->getClient()->addRents();
    }
}

void RentManager::endRent(Rent_ptr rent) {
    if(current_rents.find(rent->getID()) == nullptr){
        throw RentException("wypozyczenie nie istnieje");
    }else{
        Rent_ptr ptr = current_rents.find(rent->getID());
        rent->finishRent();
        current_rents.remove(rent);
        archived_rents.create(ptr);
        rent->getClient()->remRents();
    }
}

int RentManager::checkSize(char a) {
    if(a=='c') return current_rents.checkSize();
    else if(a=='a')return archived_rents.checkSize();
    else throw RentException("zly typ repozytorium");
}

string RentManager::showAllRents(char a) {
    if(a=='c') return current_rents.showAll();
    else if(a=='a')return archived_rents.showAll();
    else throw RentException("zly typ repozytorium");
}