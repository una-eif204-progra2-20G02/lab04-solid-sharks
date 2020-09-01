//
// Created by jeremy solis on 01-sep.-20.
//

#ifndef LAB04_SOLID_GAMEMANAGER_H
#define LAB04_SOLID_GAMEMANAGER_H

#include <sstream>
#include <fstream>
#include <iomanip>
#include "IReceiptSender.h"
#include "ISaveGame.h"

class GameManager {
private:
    void save(ISaveGame*, const std::string);
    std::string purchase (IReceiptSender*);
};


#endif //LAB04_SOLID_GAMEMANAGER_H
