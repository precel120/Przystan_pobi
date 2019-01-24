//
// Created by pobi on 13.01.19.
//

#include "Rent.h"

Rent::Rent(Space_ptr space,Client_ptr client) {
    if(client== nullptr){
        throw ClientException("klient jest pusty");
    }
    if(space== nullptr){
        throw SpaceException("miejsce jest puste");
    }else {
        this->client = client;
        this->space = space;
        id = boost::uuids::random_generator()();
        this->begin=boost::posix_time::second_clock::local_time();
    }
}
Rent::~Rent() {}

boost::uuids::uuid Rent::getID() {
    return id;
}

string Rent::showInfo() {
stringstream all;
if(end.is_not_a_date_time()){
    all<<"Rent: "<<id<<" "<<begin<<endl<<space->showInfo()<<endl<<client->showInfo();
}else all<<"Rent: "<<id<<" "<<begin<<" "<<end<<" "<<getRentPrice()<<endl<<space->showInfo()<<endl<<client->showInfo();
return all.str();
}

time_ptr Rent::getBegin() {
    return begin;
}

void Rent::finishRent(){
    end=boost::posix_time::second_clock::local_time();
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
    return rentDuration()*client->discount()*space->actualRentalPrice();
}

int Rent::rentDuration() {
    if(end.is_not_a_date_time()) throw RentException("data zakonczenia wypozyczenia nie jest data");
    if(end.date()<begin.date()) throw RentException("zla data zakonczenia wypozyczenia");
    else return (end.date()-begin.date()).days()+1;
}