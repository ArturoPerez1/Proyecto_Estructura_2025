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
    {"♣", "K", 11}
};

const Card jokers[2] = {
    {"Joker", "Joker", 14},
    {"Joker", "Joker", 14}
};

void shuffleDeck(Card (&shuffled_deck)[52])
{
    std::random_device rd;
    std::mt19937 generador(rd());

    for (size_t i = 0; i < 52; i++)
    {
        shuffled_deck[i] = CARD_DECK[i];
    };

    shuffle(std::begin(shuffled_deck), std::end(shuffled_deck), generador);
};