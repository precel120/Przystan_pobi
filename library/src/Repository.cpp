//
// Created by pobi on 15.01.19.
//

#include "Repository.h"

template<>
Rent Repository<Rent>::find(boost::uuids::uuid id){
    for(Rent it:repoList){
        if(it.getID()==id){
            return it;
        }
    }throw RentException("brak wypozyczenia w repozytorium");
}

template<>
Space Repository<Space>::find(string id) {
    for(Space it:repoList){
        if(it.getSpaceID()==id) return it;
    } throw SpaceException("brak miejsca w repozytorium");
}

template <>
Client Repository<Client>::find(boost::uuids::uuid id) {
    for(Client it:repoList){
        if(it.getID()==id) return it;
    }throw ClientException("brak klienta w repozytorium");
}


