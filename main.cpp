#include "Pieza.h"
#include "Marine.h"
#include <iostream>
#include <string>
#include <ncurses.h>

void printMatrix(Pieza***);


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
  

  printMatrix(Tablero);

  //libera matrix
  for(int i=0; i<8;i++){
   for(int j=0; i<8;j++){
    delete Tablero[i][j];
    Tablero[i][j]=NULL;
   }
  }

  for (int i=0; i<8;i++){
   delete Tablero[i];
  }
  delete Tablero;

  getch();
  endwin();
  return 0;
}

void printMatrix(Pieza*** matrix){
 for(int i=0; i<8; i++){
  for (int j=0; j<8; j++){
   if (matrix[i][j] != NULL){
    if (matrix[i][j] -> getColor()== 'B'){//Black
     printw("[");
     start_color();
     init_pair(1, COLOR_WHITE, COLOR_BLACK);
     attron(COLOR_PAIR(1));
     string color;
     color = matrix[i][j]-> getColor();
     printw(color.c_str());
     attroff(COLOR_PAIR(1));
     printw("]");
     }
     else if (matrix[i][j]-> getColor() == 'W'){//white
      printw("[");
      start_color();
      init_pair(2, COLOR_BLACK, COLOR_WHITE);
      attron(COLOR_PAIR(2));
      string color;
      color= matrix[i][j]->getColor();
      printw(color.c_str());
      attroff(COLOR_PAIR(2));
      printw("]");
     }
    }
    else{
     printw("[ ]");
    }
   }
   printw("\n");
 }
}

