#include <string>
#include <iostream>
#include "./cardDeck.h"

struct Node_Card
{
    Card card;
    Node_Card *next_card;
};

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
    Node_Card *deck_player;
    Node_Player *next_player;
};

void createDeckPlayer(Node_Card *&deck_player) {

};

void createPlayerList(Node_Player *&list_players, std::string name_player, int id)
{
    Node_Player *new_player = new Node_Player();
    Node_Player *aux1 = list_players;
    Node_Player *aux2;

    new_player->name_player = name_player;

    while (aux1 != NULL)
    {
        aux2 = aux1;
        aux1 = aux1->next_player;
    }

    if (aux1 == list_players)
    {
        list_players = new_player;
    }
    else
    {
        aux2->next_player = new_player;
    }

    new_player->next_player = aux1;
};
