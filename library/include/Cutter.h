//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_CUTTER_H
#define OOPPROJECT_CUTTER_H

#include "Large.h"
using namespace std;

class Cutter:public Large {
public:
    Cutter(int length, int width, int baseRentPrice,int weight);
    virtual ~Cutter();
    string getInfo();
    int actualRentalPrice();
};


#endif //OOPPROJECT_CUTTER_H
