//
// Created by pobi on 13.01.19.
//

#include "Rent.h"

Rent::Rent(Client_ptr client, Space_ptr space) {
    this->client=client;
    this->space=space;
    id = boost::uuids::random_generator()();
}

boost::uuids::uuid Rent::getID() {
    return id;
}

string Rent::rentInfo() {
stringstream all;
all<<id<<begin<<end<<space->spaceInfo()<<client->clientInfo();
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
    return discount*space->getActualRentalPrice();
}