//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_SMALL_H
#define OOPPROJECT_SMALL_H

#include "Space.h"
#include <iostream>
using namespace std;

class Small:public Space {
public:
    Small(int length, int width , int baseRentPrice);
    virtual ~Small();
    int actualRentalPrice();
    string showInfo();
};


#endif //OOPPROJECT_SMALL_H
