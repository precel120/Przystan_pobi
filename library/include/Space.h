//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_SPACE_H
#define OOPPROJECT_SPACE_H
#include <iostream>
#include <sstream>
#include <memory>
#include "SpaceException.h"
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/random_generator.hpp>
using namespace std;

class Space {
protected:
    boost::uuids::uuid id;
    int baseRentPrice;
    int length;
    int width;
public:
    Space(int length, int width, int baseRentPrice);
    ~Space();
    virtual int actualRentalPrice();
    boost::uuids::uuid getID();
};


#endif //OOPPROJECT_SPACE_H
