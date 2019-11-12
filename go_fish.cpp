// FILE: card_demo.cpp
// This is a small demonstration program showing how the Card and Deck classes are used.
#include <iostream>    // Provides cout and cin
#include <cstdlib>     // Provides EXIT_SUCCESS
#include "card.h"
#include "player.h"
#include "deck.h"

using namespace std;


// PROTOTYPES for functions used by this demonstration program:
void dealHand(Deck &d, Player &p, int numCards);

int main()
{
    cout << "starting\n";
    int numCards = 5;
    
    cout << "creating players\n";
    Player p1("Joe");
    Player p2("Jane");

    cout << "creating deck\n";
    Deck d;  //create a deck of cards
    cout << "shuffling\n";
    d.shuffle();

    cout << "dealing\n";
    dealHand(d, p1, numCards);
    dealHand(d, p2, numCards);

    cout << p1.getName() <<" has : " << p1.showHand() << endl;
    cout << p2.getName() <<" has : " << p2.showHand() << endl;

    return EXIT_SUCCESS;  
}



void dealHand(Deck &d, Player &p, int numCards)
{
   //cout << "dealhand\n";
   for (int i=0; i < numCards; i++)
      p.addCard(d.dealCard());
}
