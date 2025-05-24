#include <string>
#include <iostream>
#include "./cardDeck.h"


/*
    Importante:
    Los jugadores estarán almacenados dentro de una lista enlazada. Por lo que
    cada jugador será un nodo de la lista y esos nodos de la lista tienen la siguiente
    información:

    Atributos:
    - id_player: identificador del jugador (1 ó 2 ó 3 ó 4)
    - score_player: es la puntuación acumulada
    - name_player: nombre del jugardor (ejem: "Arturo")
    - position_player: sería la posición del jugador en la tabla (Magnate, rico, pobre, mendigo)
    - deck_player: es el mazo del jugador representado con una lista enlazada simple
*/

struct Node_Player
{
    int id_player = 0;
    int score_player = 0;
    std::string name_player = "";
    std::string position_player = "";
    Node_Card *deck_player = NULL;
    Node_Player *next_player;
};

    //Recibe el mazo del jugador y tambien recibe el mazo auxiliar que es de donde extraeremos 
    //las cartas del jugador, hay que tomar ese mazo auxiliar y quitar las cartas que tomemos para 
    //el mazo del jugador

void createDeckPlayer(Node_Card *&deck_player, Card (&card_deck)[52]) {
    int count = 0;
    Node_Card *new_card = new Node_Card();
    Node_Card *aux1 = deck_player;
    Node_Card *aux2;

    while(aux1 != NULL) {
        aux2 = aux1;
        aux1 = aux1->next_card;
    }
    
    if(aux1 == deck_player){
        deck_player = new_card;
    }else{
        aux2->next_card = new_card;
    }


    new_card->next_card = aux1;

};

void createPlayerList(Node_Player *&list_players, Node_Card *&shuffled_deck, std::string name_player, int id_player)
{
    Node_Player *new_player = new Node_Player();
    Node_Player *aux1 = list_players;
    Node_Player *aux2;

    new_player->name_player = name_player;
    new_player->id_player = id_player;

    while (aux1 != NULL)
    {
        aux2 = aux1;
        aux1 = aux1->next_player;
    }

    if (aux1 == list_players)
    {
        createDeckPlayer(new_player->deck_player, card_deck);
        list_players = new_player;
    }
    else
    {
        createDeckPlayer(new_player->deck_player, card_deck);
        aux2->next_player = new_player;
    }

    new_player->next_player = aux1;
};
