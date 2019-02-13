#ifndef BATTLESHIP_H
#define BATTLESHIP_H
//Vakioiden määrittelyä
const short int  MAX_Y_SIZE = 7;
const short int MAX_X_SIZE = 7;
const char SUNK = '#';
const char HIT = '*';
const char MISS = 'x';


void gameMenu();
void gameMasterLoop(); //Vastuu pelin pyörittämisestä
void insertShips(); //Funktio laivojen lisäämiselle
void printShots(char gameboard[][MAX_X_SIZE]);
void clearBoard(char gameBoard[][MAX_X_SIZE]);
//Tarvitaan koodi alustamaan pelilauta tyhjäksi 
//Funktio laittamaan laivoja laudalle.
//laivan suunnan tarkistus
//Struct laivoille
struct Ships {

};

#endif