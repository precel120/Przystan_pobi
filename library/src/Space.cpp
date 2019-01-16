//
// Created by pobi on 13.01.19.
//

#include "Space.h"

Space::Space(int length, int width,int baseRentPrice) {
    id= boost::uuids::random_generator()();;
    this->length=length;
    this->width=width;
    this->baseRentPrice=baseRentPrice;
}
Space::~Space() {}
int Space::actualRentalPrice() {
    return baseRentPrice;
}

boost::uuids::uuid Space::getID() {
    return id;
}
string Space::spaceInfo() {
    stringstream all;
    all<<id<<" "<<length<<" "<<width<<" "<<baseRentPrice<<" ";
    return all.str();
}