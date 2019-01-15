//
// Created by pobi on 12.12.18.
//

#ifndef OOPPROJECT_AUTOBUS_H
#define OOPPROJECT_AUTOBUS_H
using namespace std;

#include <iostream>
#include <memory>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "ClientType.h"
#include "Regular.h"
#include "FirstTime.h"
#include <sstream>
#include "ClientException.h"

typedef shared_ptr<ClientType> ClientType_ptr;

class Client{
private:
    boost::uuids::uuid id;
    string firstName;
    string lastName;
    string address;
    ClientType_ptr clienttype;
    int numberRents=0;
public:
    Client(string firstName,string lastName,string address);
    double discount();
    int maxRents();
    boost::uuids::uuid getID();
    string getFirstName();
    string getLastName();
    string getAddress();
    void changeClientType(char type);
    string clientInfo();
    void addRents();
    int countRents();
};


#endif //OOPPROJECT_AUTOBUS_H
