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

	int userInput = 1;

	while (userInput != 0) {

		cout << "Laivanupotuspeli" << endl;
		cout << "==================" << endl;
		cout << endl;
		cout << "Valinnat: " << endl;
		cout << "1) Syota laivat" << endl;
		cout << "2) Pelaa " << endl;
		cout << "0) Lopeta " << endl;
		cin >> userInput;

		switch (userInput) {
		case 1: cout << " ";
			break;
		case 2: cout << "  ";
			break;
		case 0:
			cout << " moro ";
		default:
			cout << "Valitse 1 tai 2 jatkaaksesi. ";
		}

	}
}


