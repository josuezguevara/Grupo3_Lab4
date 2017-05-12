#ifndef PIEZA_H
#define PIEZA_H

#include <string>


class Pieza{
 
 private:
  char color;

 public:
  Pieza();
  Pieza(char);
  
  
  void setColor(char);
  char getColor();


};
#endif
