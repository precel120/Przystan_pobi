//
// Created by pobi on 13.01.19.
//

#include "Container.h"

Container::Container(string id, int length, int width, int actualRentalPrice, int weight):
Large(id,length,width,actualRentalPrice,weight){}
Container::~Container() {}
int Container::actualRentalPrice() {
    if(weight>120000){
        return baseRentPrice*40;
    }else if(90000<weight<=120000){
        return baseRentPrice*30;
    }else{
        return baseRentPrice*22;
    }
}
