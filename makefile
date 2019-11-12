final: go_fish.o player.o deck.o card.o
	g++ -ogo_fish go_fish.o player.o deck.o card.o
driver: go_fish.cpp player.h deck.h card.h
	g++ -c go_fish.cpp
player: player.cpp player.h deck.h card.h
	g++ -c player.cpp
deck: deck.cpp deck.h card.h
	g++ -c deck.cpp
card: card.cpp card.h
	g++ -c card.cpp
