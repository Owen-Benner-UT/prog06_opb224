#include "card.h"
#include "deck.h"

Deck::Deck()
{
	
}

void Deck::shuffle()
{

}

Card Deck::dealCard()
{
	return myCards[myIndex];
}
