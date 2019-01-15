//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_REGULAR_H
#define OOPPROJECT_REGULAR_H

#include "ClientType.h"

class Regular:public ClientType {
public:
    Regular();
    ~Regular();
    int maxRents();
    double discount();
};


#endif //OOPPROJECT_REGULAR_H
