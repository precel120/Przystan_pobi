//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_RENTMANAGER_H
#define OOPPROJECT_RENTMANAGER_H

#include "Repository.h"
#include "RentException.h"

class RentManager {
Repository<Rent_ptr> current_rents;
Repository<Rent_ptr> archived_rents;
public:
    void rent(Space_ptr space,Client_ptr client);
    void endRent(Space_ptr space);
};


#endif //OOPPROJECT_RENTMANAGER_H
