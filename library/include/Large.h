//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_LARGE_H
#define OOPPROJECT_LARGE_H

#include "Space.h"
#include <sstream>
#include <iostream>
using namespace std;


class Large: public Space {
protected:
    int weight;
public:
    Large(int length,int width,int baseRentPrice,int weight);
    virtual ~Large();
    string spaceInfo();
    int actualRentalPrice();
};


#endif //OOPPROJECT_LARGE_H
