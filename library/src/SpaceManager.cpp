//
// Created by pobi on 15.01.19.
//

#include "SpaceManager.h"

void SpaceManager::addAvailable(Space_ptr space) {
    if(available_spaces.find(space->getID()) == nullptr && taken_spaces.find(space->getID()) == nullptr){
        available_spaces.create(space);
    }else throw SpaceException("miejsce zostalo juz dodane jako wolne");
}

void SpaceManager::addTaken(Space_ptr space) {
    if(available_spaces.find(space->getID()) != nullptr && taken_spaces.find(space->getID())==nullptr){
        available_spaces.remove(space);
        taken_spaces.create(space);
    }else throw SpaceException("nie udalo sie zmienic na zajete miejsce");
}

void SpaceManager::remove(Space_ptr space) {
    if(taken_spaces.find(space->getID()) != nullptr){
        taken_spaces.remove(space);
        available_spaces.create(space);
    }else throw SpaceException("miejsce nie jest zajete");
}

int SpaceManager::checkSize(char which) {
    if(which=='a')  return available_spaces.checkSize();
    else if (which=='t')return taken_spaces.checkSize();
    else throw SpaceException("bledny typ miejsca");
}
string SpaceManager::showAll(char which) {
    if(which=='a')  return available_spaces.showAll();
    else if (which=='t')return taken_spaces.showAll();
    else throw SpaceException("bledny typ miejsca");
}