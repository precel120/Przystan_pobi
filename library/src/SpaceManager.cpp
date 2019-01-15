//
// Created by pobi on 15.01.19.
//

#include "SpaceManager.h"

void SpaceManager::add(Space_ptr space) {
    if(available_spaces.find(space->getSpaceID()) == nullptr){
        taken_spaces.create(space);
    }else throw SpaceException("miejsce jest juz zajete");
}

void SpaceManager::remove(Space_ptr space) {
    if(taken_spaces.find(space->getSpaceID()) != nullptr){
        taken_spaces.remove(space);
        available_spaces.create(space);
    }else throw SpaceException("miejsce nie jest zajete");
}