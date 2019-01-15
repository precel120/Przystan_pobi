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
        if(find(object->getFirstName())== nullptr){
            repoList.push_back(object);
        }else throw invalid_argument("obiekt juz istnieje");
    }
    void remove(T object){
        repoList.earase(find(repoList.begin(),repoList.end(),object));
    }
    T find(boost::uuids::uuid id);
    T find(string name);
    Repository<T>();
};


#endif //OOPPROJECT_REPOSITORY_H
