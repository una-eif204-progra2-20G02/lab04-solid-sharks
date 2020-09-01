//
// Created by Karina Hernandez on 23-ago.-20.
//

#ifndef LAB04_SOLID_SHARKS_DIGITAL_H
#define LAB04_SOLID_SHARKS_DIGITAL_H
#include "Game.h"
#include "IReplace.h"
#include "ISaveGame.h"

class Digital : public Game,public IReplace,public ISaveGame{
  public:
  Digital();
  Digital(string,double,double,string);
  string getFilePath();
  void setFilePath(string);
  string toString()override;
  double applyDiscount()override;
  string replace()override;
  string saveData()override;

  private:
  string filePath;

};


#endif //LAB04_SOLID_SHARKS_DIGITAL_H
