//
// Created by johne on 21/8/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H
#include <sstream>
#include "Game.h"
#include "IShip.h"
#include "IDiscount.h"

class Physical: public Game,public IShip,public IDiscount  {
public:

Physical();
Physical(string,double,double,double,string);
string getProductDimensions();
void setProductDimensions(string);
double getItemWeight();
void setItemWeight(double);
string ship()override;
string toString()override;
double discount()override;

private:
string productDimensions;
double itemWeight;

};


#endif //LAB04_SOLID_PHYSICAL_H
