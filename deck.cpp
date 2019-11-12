#include "card.h"
#include "deck.h"

Deck::Deck()
{
	for(int i = 0; i < SIZE; ++i)
	{
		myCards[i] = Card();
	}
	myIndex = SIZE - 1;
}

void Deck::shuffle()
{

}

Card Deck::dealCard()
{
	//cout << "dealCard\n";
	return myCards[myIndex];
	--myIndex;
}
