//
// Created by Karina Hernandez on 23-ago.-20.
//

#ifndef LAB04_SOLID_SHARKS_DIGITAL_H
#define LAB04_SOLID_SHARKS_DIGITAL_H
#include "Game.h"
#include "IDiscount"
#include "IReplace"

class Digital : public Game,IDiscount,IReplace{
  public:
  Digital();
  Digital(string,double,double,string);
  string getFilePath();
  void setFilePath(string);
  string toString();
  double discount();
  string replace();

  private:
  string filePath;

};


#endif //LAB04_SOLID_SHARKS_DIGITAL_H
