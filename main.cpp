#include <stdio.h>
#include <iostream>
#include "./Librerias/player.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Node_Player *list_player = NULL;
    Card card_deck[52];
    shuffleDeck(card_deck);      
    createPlayerList(list_player, "Arturo", 1, card_deck);
    createPlayerList(list_player, "Angel", 2,card_deck);
    Node_Player *aux1 = list_player;

    while(aux1 != NULL){
        cout<<"Player: "<<aux1->id_player<<endl;
        cout<<"Nombre: "<<aux1->name_player<<endl;
        aux1 = aux1->next_player;
    }

    return 0;
}
