//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_CUTTER_H
#define OOPPROJECT_CUTTER_H

#include "Large.h"
using namespace std;

class Cutter:public Large {
public:
    Cutter(string id, int length, int width, int baseRentPrice,int weight);
    ~Cutter();
    int getActualRentalPrice();
    string spaceInfo();
};


#endif //OOPPROJECT_CUTTER_H
