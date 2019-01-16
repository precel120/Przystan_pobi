//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_REPOSITORY_H
#define OOPPROJECT_REPOSITORY_H
#include <list>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <memory>
#include "Rent.h"
#include "Space.h"
#include "Client.h"
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>

using namespace std;

template <class T>
class Repository {
protected:
    list<T> repoList;
public:
    void create(T object){
        repoList.push_back(object);
    };
    void remove(T object){
        repoList.erase(std::find(repoList.begin(),repoList.end(),object));
    };
    T find(boost::uuids::uuid id){
        for(auto it:repoList){
            if(it->getID()==id){
                return it;
            }
        }return nullptr;
    };
    Repository<T>();
};


#endif //OOPPROJECT_REPOSITORY_H
