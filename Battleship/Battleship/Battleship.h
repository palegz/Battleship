#ifndef BATTLESHIP_H
#define BATTLESHIP_H
//Vakioiden m��rittely�
const short int  MAX_Y_SIZE = 7;
const short int MAX_X_SIZE = 7;
const char SUNK = '#';
const char HIT = '*';
const char MISS = 'x';


void gameMenu();
void gameMasterLoop(); //Vastuu pelin py�ritt�misest�
void insertShips(); //Funktio laivojen lis��miselle
void printShots(char gameboard[][MAX_X_SIZE]);
void clearBoard(char gameBoard[][MAX_X_SIZE]);
//Tarvitaan koodi alustamaan pelilauta tyhj�ksi 
//Funktio laittamaan laivoja laudalle.
//laivan suunnan tarkistus
//Struct laivoille
struct Ships {

};

#endif