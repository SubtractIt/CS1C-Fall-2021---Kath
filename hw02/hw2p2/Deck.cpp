/* CS1C HW02
*  Programmer: Adit Mohindra
*  Class: CS1C T-Th 12:30 pm
*  Program performs a perfect shuffle on a deck of cards given a specification for a standard card deck.
*/

#include "Deck.h"

// -------------------------------------------------------------------------
// Precondition: 
//      ranks: ranks of cards
//      suits: suits of cards
// Postcondition:
//      assembles deck of cards
// -------------------------------------------------------------------------
Deck::Deck()
{
    int i = 0;

    for (int suit = 0; suit < 4; suit++)
    {
        for (int rank = 0; rank < 13; rank++)
        {
            deck[i].suit = (suits)suit;

            deck[i].rank = (ranks)rank;

            i++;
        }
    }
}

// -------------------------------------------------------------------------
// Precondition: 
//      tempDeck - splits deck into two 
// Postcondition:
//      performs perfect shuffle
// -------------------------------------------------------------------------
void Deck::perfectShuffle()
{
    int n = 0;

    Card tempDeck[DECK_SIZE];

    for (int i = 0, j = 26; i < DECK_SIZE / 2; i++, j++)
    {

        tempDeck[n++] = deck[i];

        tempDeck[n++] = deck[j];

    }

    for (int i = 0; i < DECK_SIZE; i++)
    {

        deck[i] = tempDeck[i];

    }

}

// -------------------------------------------------------------------------
// Precondition: 
//      const Card &card
//      
// Postcondition:
//      performs switch statement on the cards depending on the rank
//      passed through a parameter
// -------------------------------------------------------------------------
void Deck::print(const Card& card) const
{
    switch (card.rank)
    {
    case ACE:

        cout << "Ace of ";

        break;

    case KINGS:

        cout << "King of ";

        break;

    case QUEENS:

        cout << "Queen of ";

        break;

    case JACKS:

        cout << "Jack of ";

        break;

    case TEN:

        cout << "10 of ";

        break;

    case NINE:

        cout << "9 of ";

        break;

    case EIGHT:

        cout << "8 of ";

        break;

    case SEVEN:

        cout << "7 of ";

        break;

    case SIX:

        cout << "6 of ";

        break;

    case FIVE:

        cout << "5 of ";

        break;

    case FOUR:

        cout << "4 of ";

        break;

    case THREE:

        cout << "3 of ";

        break;

    case TWO:

        cout << "2 of ";

        break;

    default:

        cout << "Invalid ";

    }

    switch (card.suit)

    {

    case CLUBS:

        cout << "Clubs";

        break;

    case DIAMONDS:

        cout << "Diamonds";

        break;

    case HEARTS:

        cout << "Hearts";

        break;

    case SPADES:

        cout << "Spades";

        break;

    default:

        cout << "Invalid";

    }

    cout << endl;
}

// -------------------------------------------------------------------------
// Precondition: 
//      printDeck - uses print function to print out standard deck
//      print - uses deck
//      
// Postcondition:
//      prints a deck through a for loop
// -------------------------------------------------------------------------
void Deck::printDeck() const
{
    for (int i = 0; i < DECK_SIZE; i++)
    {
        print(deck[i]);
    }
}

// -------------------------------------------------------------------------
// Precondition: 
//      const Deck & otherDeck const
//      
// Postcondition:
//      overloaded operator for ==
// -------------------------------------------------------------------------
bool Deck::operator==(const Deck& otherDeck) const
{
    for (int i = 0; i < DECK_SIZE; i++)
    {
        if ((deck[i].suit != otherDeck.deck[i].suit) || (deck[i].rank != otherDeck.deck[i].rank))
        {
            return false;
        }
      
    }

    return true;
}

Deck::~Deck() { }



