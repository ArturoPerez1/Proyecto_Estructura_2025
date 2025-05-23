#include <string>
#include "./cardDeck.h"

struct Node_Card{
    Card card;
    Node_Card *next_card; 
};

/*
    -Importante: Los jugadores estarán almacenados dentro de una lista enlazada. Por lo que 
    cada jugador será un nodo de la lista y esos nodos de la lista tienen la siguiente 
    información:

    - id_player: identificador del jugador (1 ó 2 ó 3 ó 4)
    - score_player: es la puntuación acumulada
    - name_player: nombre del jugardor (ejem: "Arturo")
    - position_player: sería la posición del jugador en la tabla (Magnate, rico, pobre, mendigo)
    - deck_player: es el mazo del jugador representado con una lista enlazada simple
*/

struct Node_Player
{
    int id_player;
    int score_player;
    std::string name_player;
    std::string position_player;
    Node_Card *deck_player;
    Node_Player *next_player;
};





