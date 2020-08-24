//
// Created by Karina Hernandez on 23-ago.-20.
//

#ifndef LAB04_SOLID_STREAMING_H
#define LAB04_SOLID_STREAMING_H
#include "Game.h"
#include "IReplace"

class Streaming : public Game,IReplace{
  public:
  Streaming();
  Streaming(string,double,double);
  string toString();
  string replace();
  private:
  
};


#endif //LAB04_SOLID_STREAMING_H
