//
// Created by pobi on 13.01.19.
//

#include "Large.h"

Large::Large(string id, int length,int width,int baseRentPrice, int weight):
Space(id,length,width,baseRentPrice),
weight(weight){}
Large::~Large() {}
int Large::actualRentalPrice() {
    return Space::actualRentalPrice();
}