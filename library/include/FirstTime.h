//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_FIRSTTIME_H
#define OOPPROJECT_FIRSTTIME_H

#include "ClientType.h"

class FirstTime: public ClientType {
public:
    FirstTime();
    ~FirstTime();
    double discount();
    int maxSpace();
};


#endif //OOPPROJECT_FIRSTTIME_H
