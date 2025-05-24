#include <stdio.h>
#include <iostream>
#include "./Librerias/player.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Node_Player *list_player = NULL;
    Node_Card *shuffled_deck = NULL;
    shuffleDeck(shuffled_deck);

    // createPlayerList(list_player, "Arturo", 1, card_deck);
    // createPlayerList(list_player, "Angel", 2,card_deck);

    return 0;
}
