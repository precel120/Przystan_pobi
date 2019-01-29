//
// Created by pobi on 15.01.19.
//

#include "Repository.h"
template <>
Rent_ptr Repository<Rent_ptr>::findMe(Rent_ptr rent) {
    for(auto it:repoList){
        if(it->getSpace()->getID()==rent->getSpace()->getID()){
            return it;
        }
    }
    return nullptr;
}
