//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_SPACEMANAGER_H
#define OOPPROJECT_SPACEMANAGER_H

#include "Repository.h"
#include "SpaceException.h"
#include <list>

class SpaceManager {
    Repository<Space_ptr> available_spaces;
    Repository<Space_ptr> taken_spaces;
public:
    void add(Space_ptr space);
    void remove(Space_ptr space);
    int checkSize(char which);
    string showAll(char which);
};


#endif //OOPPROJECT_SPACEMANAGER_H
