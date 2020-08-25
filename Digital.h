//
// Created by Karina Hernandez on 23-ago.-20.
//

#ifndef LAB04_SOLID_SHARKS_DIGITAL_H
#define LAB04_SOLID_SHARKS_DIGITAL_H
#include "Game.h"
#include "IDiscount.h"
#include "IReplace.h"

class Digital : public Game,public IDiscount,public IReplace{
  public:
  Digital();
  Digital(string,double,double,string);
  string getFilePath();
  void setFilePath(string);
  string toString()override;
  double discount()override;
  string replace()override;

  private:
  string filePath;

};


#endif //LAB04_SOLID_SHARKS_DIGITAL_H
