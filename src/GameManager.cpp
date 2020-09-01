//
// Created by jeremy solis on 01-sep.-20.
//


#include "GameManager.h"

void GameManager::save(ISaveGame * saveGame, const std::string filename) {
    std::ofstream file (filename, std::ofstream::out);
    file << saveGame->saveData();
    file.close();
}

std::string GameManager::purchase(IReceiptSender *receiptSender) {
    return receiptSender->sendReceipt();
}
