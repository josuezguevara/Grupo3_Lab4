#include "Pieza.h"
#include "Marine.h"
#include <iostream>


void printMatriz(int, Pieza**);

using namespace std;

int main(){
  Pieza*** Tablero = new Pieza**[8];
  for(int i = 0; i < 8; i++){
     Tablero[i] = new Pieza*[8];
  }
  for(int i = 0; i < 8; i++){
     for(int j = 0; j < 8; j++){
	if((i == 0 && j == 1) || (i == 0 && j == 3) || (i == 0 && j == 5) || (i == 0 && j == 7)){
	   Tablero[i][j] = new Marine('B');
	} else if ((i == 1 && j == 0) || (i == 1 && j == 2) || (i == 1 && j == 4) || (i == 1 && j == 6)) {

	} else if ((i == 2 && j == 1) || (i == 2 && j == 3) || (i == 2 && j == 5) || (i == 2 && j == 7)) {

	} else if ((i == 5 && j == 0) || (i == 5 && j == 2) || (i == 5 && j == 4) || (i == 5 && j == 6)) {

	} else if ((i == 6 && j == 1) || (i == 6 && j == 3) || (i == 6 && j == 5) || (i == 6 && j == 7)) {

	} else if ((i == 7 && j == 0) || (i == 7 && j == 2) || (i == 7 && j == 4) || (i == 7 && j == 6)) {

	} else {
 	   Tablero[i][j] = NULL;
	}
     }
  }
  
  return 0;
}

void printMatriz(int size, Pieza** matrix){
        for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++) {
                         cout << "  " << "algo";
                }
                cout << endl;
        }
}
