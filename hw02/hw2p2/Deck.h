/* CS1C HW02
*  Programmer: Adit Mohindra
*  Class: CS1C T-Th 12:30 pm
*  Program performs a perfect shuffle on a deck of cards given a specification for a standard card deck.
*/

#pragma once

#include <iostream>

const int DECK_SIZE = 52;

using namespace std;

//enumeration values for ranks and suits
enum suits { CLUBS, DIAMONDS, HEARTS, SPADES };

enum ranks { ACE, KINGS, QUEENS, JACKS, TEN, NINE, EIGHT, SEVEN, SIX, FIVE, FOUR, THREE, TWO };

// -------------------------------------------------------------------------
// Precondition: 
//      ranks: ranks of cards
//      suits: suits of cards
// Postcondition:
//      Card struct
// -------------------------------------------------------------------------

struct Card
{
	ranks rank;
	suits suit;
};

// -------------------------------------------------------------------------
// Precondition: 
//      class Deck: class Deck with array card
//      Deck() constructor and destructor
// Postcondition:
//      Card struct array
// -------------------------------------------------------------------------
class Deck
{
private:
	Card deck[DECK_SIZE];			//array of type Card

public:
	Deck();
	Deck(Card deck[DECK_SIZE]);
	~Deck();

	//member functions to perform operations on Card
	void perfectShuffle();
	void printDeck() const;
	void print(const Card& card) const;

	bool operator==(const Deck& otherDeck)const;

};