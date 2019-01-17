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

boost::uuids::uuid Space::getID() {
    return id;
}
