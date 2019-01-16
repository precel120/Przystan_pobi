//
// Created by pobi on 13.01.19.
//

#include "Rent.h"

Rent::Rent(Client_ptr client, Space_ptr space) {
    if(client== nullptr){
        throw ClientException("klient jest pusty");
    }
    if(space== nullptr){
        throw SpaceException("miejsce jest puste");
    }else {
        this->client = client;
        this->space = space;
        id = boost::uuids::random_generator()();
    }
}

boost::uuids::uuid Rent::getID() {
    return id;
}

string Rent::rentInfo() {
stringstream all;
all<<id<<begin<<end<<client->clientInfo();
return all.str();
}

time_ptr Rent::getBegin() {
    return begin;
}

time_ptr Rent::getEnd() {
    return end;
}

Space_ptr Rent::getSpace() {
    return space;
}
Client_ptr Rent::getClient() {
    return client;
}

int Rent::getRentPrice() {
    int discount=(int)client->discount();
    return rentDuration()*discount*space->actualRentalPrice();
}

int Rent::rentDuration() {
    if(end.is_not_a_date_time()) throw RentException("data zakonczenia wypozyczenia nie jest data");
    if(end.date()<begin.date()) throw RentException("zla data zakonczenia wypozyczenia");
    else return (end.date()-begin.date()).days()+1;
}