//
// Created by pobi on 13.01.19.
//

#include "Space.h"

Space::Space(string id,int length, int width,int baseRentPrice) {
    this->id=id;
    this->length=length;
    this->width=width;
    this->baseRentPrice=baseRentPrice;
}
Space::~Space() {}
int Space::actualRentalPrice() {
    return baseRentPrice;
}
string Space::spaceInfo() {
    stringstream all;
    all<<length<<width<<baseRentPrice;
    return all.str();
}
string Space::getSpaceID() {
    return id;
}