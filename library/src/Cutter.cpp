//
// Created by pobi on 13.01.19.
//

#include "Cutter.h"

Cutter::Cutter(int length, int width, int baseRentPrice, int weight):
Large(length,width,baseRentPrice,weight){}
Cutter::~Cutter() {}
int Cutter::getActualRentalPrice() {
    if (weight>20000){
        return baseRentPrice*5;
    }else if(10000 < weight && weight <= 20000){
        return baseRentPrice*3;
    }else if(weight>0) return baseRentPrice*2;
    else throw SpaceException("zła waga statku");
}
string Cutter::showInfo() {
    stringstream all;
    all<<"Cutter: "<<Space::getID()<<" "<<length<<" "<<width<<" "<<actualRentalPrice()<<" "<<weight;
    return all.str();
}
string Cutter::spaceInfo() {
    stringstream all;
    all<<id<<" "<<length<<" "<<width<<" "<<getActualRentalPrice()<<" "<<weight;
    return all.str();
}