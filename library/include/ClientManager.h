//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_CLIENTMANAGER_H
#define OOPPROJECT_CLIENTMANAGER_H

#include "ClientException.h"
#include "Repository.h"
#include "list"
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>

class ClientManager {
Repository<Client_ptr> clients;
public:
    void add(Client_ptr client);
    void remove(Client_ptr client);
    int checkSize();
    string showAllClients();
};


#endif //OOPPROJECT_CLIENTMANAGER_H
