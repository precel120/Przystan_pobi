//
// Created by pobi on 13.01.19.
//

#include "Container.h"

Container::Container(int length, int width, int baseRentPrice, int weight):
Large(length,width,baseRentPrice,weight){}
Container::~Container() {}
int Container::getActualRentalPrice() {
    if(weight>120000){
        return baseRentPrice*40;
    }else if(90000 < weight && weight <= 120000){
        return baseRentPrice*30;
    }else if(weight>0){
        return baseRentPrice*22;
    }else throw SpaceException("zla waga statku");
}

string Container::showInfo() {
    stringstream all;
    all<<"Container: "<<Space::getID()<<" "<<length<<" "<<width<<" "<<actualRentalPrice()<<" "<<weight;
    return all.str();
}
