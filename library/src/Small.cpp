//
// Created by pobi on 13.01.19.
//

#include "Small.h"
Small::Small(int length,int width,int baseRentPrice):
Space(length,width,baseRentPrice){}
Small::~Small() {}
int Small::actualRentalPrice() {
    return Space::actualRentalPrice();
}
string Small::spaceInfo() {
    stringstream all;
    all<<Space::getID()<<" "<<length<<" "<<width<<" "<<baseRentPrice;
    return all.str();
}