//
// Created by pobi on 13.01.19.
//

#include "Cutter.h"

Cutter::Cutter(string id, int length, int width, int baseRentPrice, int weight):
Large(id,length,width,baseRentPrice,weight){}
Cutter::~Cutter() {}
int Cutter::actualRentalPrice() {
    if (weight>20000){
        return baseRentPrice*5;
    }else if(10000<weight<=20000){
        return baseRentPrice*3;
    }else return baseRentPrice*2;
}
