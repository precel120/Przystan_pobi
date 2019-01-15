//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_RENTEXCEPTION_H
#define OOPPROJECT_RENTEXCEPTION_H

#include <iostream>
using namespace std;

class RentException:public logic_error {
public:
    RentException(string message);
};


#endif //OOPPROJECT_RENTEXCEPTION_H
