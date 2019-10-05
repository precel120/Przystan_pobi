//
// Created by pobi on 13.01.19.
//

#include "Small.h"
Small::Small(int length,int width,int baseRentPrice):
Space(length,width,baseRentPrice){}
Small::~Small() {}
int Small::actualRentalPrice() {
    return baseRentPrice;
}
string Small::showInfo() {
    stringstream all;
    all<<"Small: "<<Space::getID()<<" "<<length<<" "<<width<<" "<<baseRentPrice;
    return all.str();
}