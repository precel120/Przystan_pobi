//
// Created by pobi on 13.01.19.
//

#include "Space.h"

Space::Space(int length, int width,int baseRentPrice):
length(length),width(width),baseRentPrice(baseRentPrice){
    id= boost::uuids::random_generator()();
}
Space::~Space() {}

boost::uuids::uuid Space::getID() {
    return id;
}
