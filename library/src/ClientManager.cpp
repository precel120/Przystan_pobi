//
// Created by pobi on 15.01.19.
//

#include "ClientManager.h"

void ClientManager::add(Client_ptr client) {
    if(clients.find(client->getID()) == nullptr){
        clients.create(client);
    }else throw ClientException("klient juz istnieje");
}

void ClientManager::remove(Client_ptr client) {
    if(clients.find(client->getID())!= nullptr){
        clients.remove(client);
    }else throw ClientException("klient nie istnieje");
}
