#include <string>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <random>

struct Card
{
    std::string suit;
    std::string card_value;
    int score;
};

/*
 * Node_Card es para hacer la implementación de mazos de carta
 */

struct Node_Card
{
    Card card;
    Node_Card *next_card;
};

const Card CARD_DECK[52] = {
    // Picas (♠)
    {"♠", "A", 12},
    {"♠", "2", 13},
    {"♠", "3", 1},
    {"♠", "4", 2},
    {"♠", "5", 3},
    {"♠", "6", 4},
    {"♠", "7", 5},
    {"♠", "8", 6},
    {"♠", "9", 7},
    {"♠", "10", 8},
    {"♠", "J", 9},
    {"♠", "Q", 10},
    {"♠", "K", 11},

    // Corazones (♥)
    {"♥", "A", 12},
    {"♥", "2", 13},
    {"♥", "3", 1},
    {"♥", "4", 2},
    {"♥", "5", 3},
    {"♥", "6", 4},
    {"♥", "7", 5},
    {"♥", "8", 6},
    {"♥", "9", 7},
    {"♥", "10", 8},
    {"♥", "J", 9},
    {"♥", "Q", 10},
    {"♥", "K", 11},

    // Diamantes (♦)
    {"♦", "A", 12},
    {"♦", "2", 13},
    {"♦", "3", 1},
    {"♦", "4", 2},
    {"♦", "5", 3},
    {"♦", "6", 4},
    {"♦", "7", 5},
    {"♦", "8", 6},
    {"♦", "9", 7},
    {"♦", "10", 8},
    {"♦", "J", 9},
    {"♦", "Q", 10},
    {"♦", "K", 11},

    // Tréboles (♣)
    {"♣", "A", 12},
    {"♣", "2", 13},
    {"♣", "3", 1},
    {"♣", "4", 2},
    {"♣", "5", 3},
    {"♣", "6", 4},
    {"♣", "7", 5},
    {"♣", "8", 6},
    {"♣", "9", 7},
    {"♣", "10", 8},
    {"♣", "J", 9},
    {"♣", "Q", 10},
    {"♣", "K", 11}};

const Card JOCKERS[2] = {
    {"Joker", "Joker", 14},
    {"Joker", "Joker", 14}};

void shuffleDeck(Node_Card *&shuffled_deck)
{
    Card card_deck[52];
    Node_Card *aux1 = shuffled_deck;
    Node_Card *aux2;

    std::random_device rd;
    std::mt19937 generador(rd());

    for (size_t i = 0; i < 52; i++)
    {
        card_deck[i].card_value = CARD_DECK[i].card_value;
        card_deck[i].score = CARD_DECK[i].score;
        card_deck[i].suit = CARD_DECK[i].suit;
    };
    
    shuffle(std::begin(card_deck), std::end(card_deck), generador);

    for (size_t i = 0; i < 52; i++)
    {
        if (aux1 == shuffled_deck)
        {
            Node_Card *new_card = new Node_Card();
            new_card->card.card_value = card_deck[i].card_value;
            new_card->card.score = card_deck[i].score;
            new_card->card.suit = card_deck[i].suit;
            shuffled_deck = new_card;
            new_card->next_card = aux1;
        }
        else
        {
            Node_Card *new_card = new Node_Card();
            aux1 = shuffled_deck;

            while (aux1 != NULL)
            {
                aux2 = aux1;
                aux1 = aux1->next_card;
            }

            new_card->card.card_value = card_deck[i].card_value;
            new_card->card.score = card_deck[i].score;
            new_card->card.suit = card_deck[i].suit;
            aux2->next_card = new_card;
            new_card->next_card = aux1;
        }
    };
};