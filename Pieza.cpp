#include "Pieza.h"

Pieza::Pieza(){

}

Pieza::Pieza(char color){
 this->color=color;
}

char Pieza::getColor(){
 return color;
}


void Pieza::setColor(char color){
 this->color=color;
}

