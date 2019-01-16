//
// Created by pobi on 13.01.19.
//

#include "Small.h"
Small::Small(int length,int width,int baseRentPrice):
Space(length,width,baseRentPrice){}
int Small::actualRentalPrice() {
    return Space::actualRentalPrice();
}