//
// Created by johne on 21/8/2020.
//

#include "Physical.h"

Physical::Physical():Game(){
  productDimensions = " ";
  itemWeight = 0.0;
}

Physical::Physical(string name,double price,double tax, string productDimensions, double itemWeight):Game(name,price,tax){
  this->productDimensions = productDimensions;
  this->itemWeight = itemWeight;)}

string Physical::getProductDimensions(){
  return productDimensions;
}

void Physical::setProductDimension(std::string productDimension){
  this->productDimensions = productDimensions;
}

double Physical::getItemWeight(){
  return itemWeight;
}

void Physical::setItemWeight(double itemWeight){
  this->itemWeight = itemWeight;
}

double Physical::discount() {
  return getprice();
}
string Physical::ship(){
  stringstream d;
  d<<"this product will have a shipment. "<<endl;
  return d.str();
}

string Physical::toString(){
  stringstream d;
  d<<Game::toString()<<endl;
  d<<"No discount at this moment on Physical Products"<<endl;
  d<<"Price: "<<discount()<<endl;
  d<<"Product Dimensions: "<<getProductDimensions()<<endl;
  d<<"Item Weight: "<<getItemWeight()<<endl;
}
