//
// Created by Karina Hernandez on 23-ago.-20.
//

#ifndef LAB04_SOLID_STREAMING_H
#define LAB04_SOLID_STREAMING_H
#include "Game.h"
#include "IReplace.h"
#include "ISaveGame.h"

class Streaming : public Game,public IReplace,public ISaveGame{
  public:
  Streaming();
  Streaming(string,double,double);
  string toString()override;
  string replace()override;
  string saveData()override;
};


#endif //LAB04_SOLID_STREAMING_H
