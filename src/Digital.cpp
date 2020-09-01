//
// Created by Karina Hernandez on 23-ago.-20.
//

#include "Digital.h"

Digital::Digital():Game(){
  filePath = " ";
}

Digital::Digital(string name,double price,double tax, string filePath):Game(name,price,tax){
  this->filePath = filePath;
}

string Digital::getFilePath(){
  return filePath;
}

void Digital::setFilePath(std::string filePath){
  this->filePath = filePath;
}

string Digital::replace(){
  stringstream d;
  d<<"this product will have a replacement."<<endl;
  return d.str();
}

double Digital::applyDiscount(){
  return getPrice()-(getPrice()*0.15);
}

string Digital::toString(){
  stringstream d;
  d<<Game::toString()<<endl;
  d<<"Price with Discount: "<<applyDiscount()<<endl;
  d<<"File Path: "<<getFilePath()<<endl;
  return d.str();
}

string Digital::saveData() {
    return toString();
}
