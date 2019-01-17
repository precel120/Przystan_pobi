//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_CONTAINER_H
#define OOPPROJECT_CONTAINER_H

#include "Large.h"

using namespace std;

class Container: public Large {
public:
    Container(int length,int width, int actualRentalPrice,int weight);
    virtual ~Container();
    string getInfo();
    int actualRentalPrice();
};


#endif //OOPPROJECT_CONTAINER_H
