//
// Created by pobi on 13.01.19.
//

#include "Large.h"

Large::Large(int length,int width,int baseRentPrice, int weight):
Space(length,width,baseRentPrice){
    if(weight<0){
        throw SpaceException("waga mniejsza od zera");
    }else
        this->weight=weight;
}
Large::~Large() {}
