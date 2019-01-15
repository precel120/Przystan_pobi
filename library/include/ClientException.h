//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_CLIENTEXCEPTION_H
#define OOPPROJECT_CLIENTEXCEPTION_H

#include <iostream>
using namespace std;

class ClientException: public logic_error {
public:
    ClientException(string message);
};


#endif //OOPPROJECT_CLIENTEXCEPTION_H
