//
// Created by Karina Hernandez on 23-ago.-20.
//

#include "Streaming.h"

Streaming::Streaming():Game(){

}

Streaming::Streaming(string name,double price,double tax):Game(name,price,tax){

}

string Streaming::toString(){
  stringstream s;
  s<<Game::toString()<<endl;
  return s.str();
}

string Streaming::replace(){
  stringstream s;
  s<<""<<endl;
  return s.str();
}