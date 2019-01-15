//
// Created by pobi on 13.01.19.
//

#include "Cutter.h"

Cutter::Cutter(string id, int length, int width, int baseRentPrice, int weight):
Large(id,length,width,baseRentPrice,weight){}
Cutter::~Cutter() {}
int Cutter::actualRentalPrice() {
    if (weight>20000){
        return Large::actualRentalPrice()*5;
    }else if(10000 < weight && weight <= 20000){
        return Large::actualRentalPrice()*3;
    }else if(weight>0) return Large::actualRentalPrice()*2;
    else throw SpaceException("zła waga statku");
}
string Cutter::spaceInfo() {
    stringstream all;
    all<<id<<" "<<length<<" "<<width<<" "<<actualRentalPrice()<<" "<<weight;
    return all.str();
}