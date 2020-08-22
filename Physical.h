//
// Created by johne on 21/8/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H
#include <sstream>

class Physical: public Game  {
public:

Physical()
Physical(string,double,double, double,string)
getProductDimensions():string
setProductDimensions(string):void
double getItemWeight()
void setItemWeight(double)

private:
string productDimensions;
double itemWeight;

};


#endif //LAB04_SOLID_PHYSICAL_H
