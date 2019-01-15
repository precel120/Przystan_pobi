//
// Created by pobi on 12.12.18.
//

#include "Client.h"
#include <sstream>
Client::Client(string firstName, string lastName, string address) {
    this->firstName=firstName;
    this->lastName=lastName;
    this->address=address;
    id = boost::uuids::random_generator()();
    clienttype = ClientType_ptr(new FirstTime());
}

boost::uuids::uuid Client::getID() {
    return id;
}

string Client::getFirstName() {
    return firstName;
}

string Client::getLastName() {
    return lastName;
}

string Client::getAddress() {
    return address;
}

double Client::discount() {
    return clienttype->discount();
}

void Client::changeClientType(char type) {
switch(type) {
    case 'R':
        clienttype=ClientType_ptr(new Regular());
        break;
    case 'F':
        clienttype=ClientType_ptr(new FirstTime());
        break;
    default:
        throw ClientException("zły typ clienta");
}
}

int Client::maxRents() {
    return clienttype->maxRents();
}
string Client::clientInfo() {
    stringstream all;
    all<<id<<" "<<firstName<<" "<<lastName<<" "<<address;
    return all.str();
}

void Client::addRents() {
    this->numberRents++;
}

int Client::countRents() {
    return this->numberRents;
}


