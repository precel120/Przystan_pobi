//
// Created by pobi on 13.01.19.
//

#include "Container.h"

Container::Container(int length, int width, int baseRentalPrice, int weight):
Large(length,width,baseRentalPrice,weight){}
Container::~Container() {}
int Container::actualRentalPrice() {
    if(weight>120000){
        return Large::actualRentalPrice()*40;
    }else if(90000 < weight && weight <= 120000){
        return Large::actualRentalPrice()*30;
    }else if(weight>0){
        return Large::actualRentalPrice()*22;
    }else throw SpaceException("zla waga statku");
}
