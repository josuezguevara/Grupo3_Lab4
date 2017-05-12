#include "Pieza.h"
#include <iostream>


using namespace std;

int main(){
  Pieza*** Tablero[][] = new Pieza**[8]
  for(int i = 0; i < 8; i++){
     Tablero[i] = new Pieza*[8];
  }
  for(int i = 0; i < 8; i++){
     for(int j = 0; j < 8; j++){
	Tablero[i][j] = NULL;
     }
  }

  return 0;
}



