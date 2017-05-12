#include "Pieza.h"

Pieza::Pieza(){

}

Pieza::Pieza(int X, int Y){
 this->X=X;
 this->Y=Y;
}

int Pieza::getX(){
 return X;
}

int Pieza::getY(){
 return Y;
}

void Pieza::setX(int pX){
 X=pX;
}

void Pieza::setY(int pY){
 Y=pY;
}
