//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_SPACEEXCEPTION_H
#define OOPPROJECT_SPACEEXCEPTION_H
using namespace std;

#include <iostream>

class SpaceException:public logic_error {
public:
    SpaceException(string message);
};


#endif //OOPPROJECT_SPACEEXCEPTION_H
