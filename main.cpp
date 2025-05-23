#include <stdio.h>
#include <iostream>
#include "./Librerias/seedCartas.h"
using namespace std;

int main(int argc, char const *argv[])
{
    for (const Carta& cartaActual : MAZO_CARTAS) {
        cout << "Carta: " << cartaActual.valor_carta << " de " << cartaActual.palo
                  << " (Valor numérico: " << cartaActual.valor_numerico << ")" <<endl;
    }
    return 0;
}
