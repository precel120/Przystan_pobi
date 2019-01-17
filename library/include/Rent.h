//
// Created by pobi on 13.01.19.
//

#ifndef OOPPROJECT_RENT_H
#define OOPPROJECT_RENT_H

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <iostream>
#include <memory>
#include "Client.h"
#include <sstream>
#include "Space.h"
#include "ClientException.h"
#include "SpaceException.h"
#include "RentException.h"


using namespace std;

typedef shared_ptr<Client> Client_ptr;
typedef shared_ptr<Space> Space_ptr;
typedef boost::posix_time::ptime time_ptr;

class Rent {
    boost::uuids::uuid id;
    Space_ptr space;
    Client_ptr client;
    time_ptr begin;
    time_ptr end;
public:
    Rent(Space_ptr space,Client_ptr client);
    virtual ~Rent();
    string getInfo();
    boost::uuids::uuid getID();
    time_ptr getBegin();
    time_ptr getEnd();
    void finishRent();
    Space_ptr getSpace();
    Client_ptr getClient();
    int getRentPrice();
    int rentDuration();
};

typedef shared_ptr<Rent> Rent_ptr;

#endif //OOPPROJECT_RENT_H
