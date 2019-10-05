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
    void rent(Rent_ptr rent);
    void endRent(Rent_ptr rent);
    Space_ptr findMe(Rent_ptr rent);
    int checkSize(char a);
    string showAllRents(char a);
};


#endif //OOPPROJECT_RENTMANAGER_H
