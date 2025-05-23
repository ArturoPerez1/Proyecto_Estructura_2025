#include <string>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <random>

using namespace std;

struct Carta
{
    string palo;
    string valor_carta;
    int valor_numerico;
};

const Carta MAZO_CARTAS[52] = {
    // Picas (♠)
    {"♠", "A", 1},
    {"♠", "2", 2},
    {"♠", "3", 3},
    {"♠", "4", 4},
    {"♠", "5", 5},
    {"♠", "6", 6},
    {"♠", "7", 7},
    {"♠", "8", 8},
    {"♠", "9", 9},
    {"♠", "10", 10},
    {"♠", "J", 11},
    {"♠", "Q", 12},
    {"♠", "K", 13},

    // Corazones (♥)
    {"♥", "A", 1},
    {"♥", "2", 2},
    {"♥", "3", 3},
    {"♥", "4", 4},
    {"♥", "5", 5},
    {"♥", "6", 6},
    {"♥", "7", 7},
    {"♥", "8", 8},
    {"♥", "9", 9},
    {"♥", "10", 10},
    {"♥", "J", 11},
    {"♥", "Q", 12},
    {"♥", "K", 13},

    // Diamantes (♦)
    {"♦", "A", 1},
    {"♦", "2", 2},
    {"♦", "3", 3},
    {"♦", "4", 4},
    {"♦", "5", 5},
    {"♦", "6", 6},
    {"♦", "7", 7},
    {"♦", "8", 8},
    {"♦", "9", 9},
    {"♦", "10", 10},
    {"♦", "J", 11},
    {"♦", "Q", 12},
    {"♦", "K", 13},

    // Tréboles (♣)
    {"♣", "A", 1},
    {"♣", "2", 2},
    {"♣", "3", 3},
    {"♣", "4", 4},
    {"♣", "5", 5},
    {"♣", "6", 6},
    {"♣", "7", 7},
    {"♣", "8", 8},
    {"♣", "9", 9},
    {"♣", "10", 10},
    {"♣", "J", 11},
    {"♣", "Q", 12},
    {"♣", "K", 13},
};

const Carta jokers[2] = {
    {"Joker", "Joker", 14},
    {"Joker", "Joker", 14}
};

void barajarMazo(Carta (&mazo_barajado)[52])
{
    random_device rd;
    mt19937 generador(rd());

    for (size_t i = 0; i < 52; i++)
    {
        mazo_barajado[i] = MAZO_CARTAS[i];
    };

    shuffle(begin(mazo_barajado), end(mazo_barajado), generador);
};