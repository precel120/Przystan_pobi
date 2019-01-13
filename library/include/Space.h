//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_SPACE_H
#define OOPPROJECT_SPACE_H
#include <iostream>
#include <sstream>
#include <memory>
using namespace std;

class Space {
protected:
    string id;
    int baseRentPrice;
    int length;
    int width;
public:
    Space(string id,int length, int width, int baseRentPrice);
    ~Space();
    virtual string spaceInfo();
    virtual int getActualRentalPrice();
};


#endif //OOPPROJECT_SPACE_H