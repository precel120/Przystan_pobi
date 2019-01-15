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

typedef boost::local_time::local_date_time time_ptr;
typedef boost::local_time::time_zone_ptr TZone;
typedef boost::posix_time::ptime PTime;

class Rent {
    boost::uuids::uuid id;
    Space_ptr space;
    Client_ptr client;
    TZone timeZone{new boost::local_time::posix_time_zone("CET+1")};
    time_ptr begin=time_ptr(PTime(), TZone());
    time_ptr end=time_ptr(PTime(), TZone());
public:
    Rent(Client_ptr client,Space_ptr space);
    ~Rent();
    string rentInfo();
    boost::uuids::uuid getID();
    time_ptr getBegin();
    time_ptr getEnd();
    Space_ptr getSpace();
    Client_ptr getClient();
    int getRentPrice();
    int rentDuration();
};

typedef shared_ptr<Rent> Rent_ptr;

#endif //OOPPROJECT_RENT_H
