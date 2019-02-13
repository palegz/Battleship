#include "Battleship.h"
#include <iostream>

using std::cout; using std::endl; using std::cin;

void gameMenu()
{
	/*--------------------------------------------------
 *
 * nimi:gameMenu
 * toiminta:Tulostaa pelimenun.
 * parametri(t):
 * paluuarvo(t):
 *
 *--------------------------------------------------*/
		cout << "Laivanupotuspeli" << endl;
		cout << "==================" << endl;
		cout << endl;
		cout << "Valinnat: " << endl;
		cout << "1) Syota laivat" << endl;
		cout << "2) Pelaa " << endl;
		cout << "L) Lopeta " << endl;
		cout << endl;
}
/*--------------------------------------------------
 *
 * nimi:gameMasterLoop
 * toiminta:Päälooppi pelin toiminnalle. Eli tästä alotetaan alustamalla pelialusta ja printtaillaa menua.
 * parametri(t):
 * paluuarvo(t):
 *
 *--------------------------------------------------*/
void gameMasterLoop()
{
	char gameboard[MAX_Y_SIZE][MAX_X_SIZE] = { 0 }; //alustetaan taulukko tyhjäksi
	char userInput = '0';

	while (userInput != 'L')
	{

		gameMenu();
		cin >> userInput;

		switch (userInput) {
		case '1': cout << " ";
			//insertShips();
			break;
		case '2': cout << "  ";
			printShots(gameboard);
		break;
		case 'L':
			cout << " moro ";
		default:
			cout << "Valitse 1 tai 2 jatkaaksesi. ";
		}

	}
}
/*--------------------------------------------------
 *
 * nimi:gameMasterLoop
 * toiminta:Päälooppi pelin toiminnalle. Eli tästä alotetaan alustamalla pelialusta ja printtaillaa menua.
 * parametri(t):gameboard
 * paluuarvo(t):
 *
 *--------------------------------------------------*/


void printShots(char gameboard[][MAX_X_SIZE]) {

	cout << "Pelitilanne on seuraava: " << endl;  // Pelilaudan reunojen tulostus
	cout << "    ";
	//ylänumerointi
	for (int i = 1; i < 8; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	//Yläviiva
	cout << "   ";
	for (int i = 1; i < 16; i++)
	{
		cout << "-";
	}
	cout << endl;
	//kirjaimientulostus ja pelilauta
	for (int i = 0; i < 6; i++) {
		cout << static_cast<char>('A' + i) << " | ";
		for (int j = 0; j < 6; j++)
		{
			cout << gameboard[i][j] << " ";
		}
		cout << " | " << static_cast<char>('A' + i) << endl;

	}

	//alaviiva
	cout << "   ";
	for (int i = 1; i < 16; i++)
	{
		cout << "-";
	}



}
