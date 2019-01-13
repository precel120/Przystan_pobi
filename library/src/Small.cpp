//
// Created by pobi on 13.01.19.
//

#include "Small.h"
Small::Small(string id,int length,int width,int baseRentPrice):
Space(id,length,width,baseRentPrice){}
int Small::actualRentalPrice() {
    return baseRentPrice;
}