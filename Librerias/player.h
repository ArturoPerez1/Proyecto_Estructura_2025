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

void createDeckPlayer(Node_Card *&deck_player, Node_Card *&card_deck)
{
    int count = 1;
    Node_Card *card_aux = card_deck;
    Node_Card *deck_aux1 = deck_player;
    Node_Card *deck_aux2;

    while ((card_aux != NULL) && (count <= 13))
    {
        Node_Card *new_card = new Node_Card();
        new_card->card.card_value = card_aux->card.card_value;
        new_card->card.score = card_aux->card.score;
        new_card->card.suit = card_aux->card.suit;

        while (deck_aux1 != NULL)
        {
            deck_aux2 = deck_aux1;
            deck_aux1 = deck_aux1->next_card;
        }

        if (deck_aux1 == deck_player)
        {
            deck_player = new_card;
            new_card->next_card = deck_aux1;
            deck_aux1 = deck_player;
        }
        else
        {
            deck_aux2->next_card = new_card;
            new_card->next_card = deck_aux1;
            deck_aux1 = deck_player;
        }
        card_deck = card_aux->next_card;
        card_aux = card_deck;
        count++;
    }
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
        createDeckPlayer(new_player->deck_player, shuffled_deck);
        list_players = new_player;
    }
    else
    {
        createDeckPlayer(new_player->deck_player, shuffled_deck);
        aux2->next_player = new_player;
    }

    new_player->next_player = aux1;
};
