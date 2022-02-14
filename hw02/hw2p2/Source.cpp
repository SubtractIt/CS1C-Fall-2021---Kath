/* CS1C HW02
*  Programmer: Adit Mohindra
*  Class: CS1C T-Th 12:30 pm
*  Program performs a perfect shuffle on a deck of cards given a specification for a standard card deck.
*/

#include "Deck.h"

int main()
{
	
	Deck deck1;
	Deck deck2;



	cout << "Original Deck:\n";

	deck1.printDeck();

	cout << "Shuffled Deck after first Shuffle:\n";

	deck1.perfectShuffle();
	deck1.printDeck();

	int n = 1;

	while (!(deck1 == deck2))
	{
		n++;

		deck1.perfectShuffle();
	}

	cout << "\nNumber of perfect shuffles required to return deck to original state: " << n << endl;

	cout << "\nFinal Deck : " << endl;

	deck1.printDeck();



	return 0;
}