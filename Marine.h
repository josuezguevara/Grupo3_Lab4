#include "Pieza.h"

#ifndef MARINE_H
#define MARINE_H

class Marine: public Pieza {

 public:
 Marine(char color);
 Pieza** Comer(int,int,int,int,Pieza**);
 Pieza** Mover(int,int,int,int,Pieza**);

};

#endif
