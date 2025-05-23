#include <string>
#include <stdio.h>
using namespace std;

struct Carta{
    string palo;
    string valor_carta;
    int valor_numerico;
};

const Carta MAZO_CARTAS[54] = {
    // Picas (♠)
    {"Picas", "A", 1},
    {"Picas", "2", 2},
    {"Picas", "3", 3},
    {"Picas", "4", 4},
    {"Picas", "5", 5},
    {"Picas", "6", 6},
    {"Picas", "7", 7},
    {"Picas", "8", 8},
    {"Picas", "9", 9},
    {"Picas", "10", 10},
    {"Picas", "J", 11},
    {"Picas", "Q", 12},
    {"Picas", "K", 13},

    // Corazones (♥)
    {"Corazones", "A", 1},
    {"Corazones", "2", 2},
    {"Corazones", "3", 3},
    {"Corazones", "4", 4},
    {"Corazones", "5", 5},
    {"Corazones", "6", 6},
    {"Corazones", "7", 7},
    {"Corazones", "8", 8},
    {"Corazones", "9", 9},
    {"Corazones", "10", 10},
    {"Corazones", "J", 11},
    {"Corazones", "Q", 12},
    {"Corazones", "K", 13},

    // Diamantes (♦)
    {"Diamantes", "A", 1},
    {"Diamantes", "2", 2},
    {"Diamantes", "3", 3},
    {"Diamantes", "4", 4},
    {"Diamantes", "5", 5},
    {"Diamantes", "6", 6},
    {"Diamantes", "7", 7},
    {"Diamantes", "8", 8},
    {"Diamantes", "9", 9},
    {"Diamantes", "10", 10},
    {"Diamantes", "J", 11},
    {"Diamantes", "Q", 12},
    {"Diamantes", "K", 13},

    // Tréboles (♣)
    {"Treboles", "A", 1},
    {"Treboles", "2", 2},
    {"Treboles", "3", 3},
    {"Treboles", "4", 4},
    {"Treboles", "5", 5},
    {"Treboles", "6", 6},
    {"Treboles", "7", 7},
    {"Treboles", "8", 8},
    {"Treboles", "9", 9},
    {"Treboles", "10", 10},
    {"Treboles", "J", 11},
    {"Treboles", "Q", 12},
    {"Treboles", "K", 13},

    // Jokers
    {"Joker", "Joker", 14},
    {"Joker", "Joker", 14}};
