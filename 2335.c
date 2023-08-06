#include <stdio.h>

int fillCups( int* amount, int amountSize );

int main() {
    int amount[] = {1, 4, 2};
    int amountSize = sizeof(amount) / sizeof(amount[0]);

    int minSeconds = fillCups(amount, amountSize);
    printf("Resultado: %d", minSeconds);

    return 0;
}

/*
====================
fillCups
 Função que consiste no decremento dos tipos de água do vetor
 e no incremento dos segundos a cada ação.
====================
*/

int fillCups( int* const amount, int amountSize ) {

    int minSeconds = 0;

    while ( amount[0] + amount[1] + amount[2] != 0 ) {
        if ( amount[0] >= amount[2] && amount[1] >= amount[2] ) {
            if ( amount[0] > 0 )
            --amount[0];
            if ( amount[1] > 0 )
            --amount[1];
        }

        else if ( amount[0] >= amount[1] && amount[2] >= amount[1] ) {
            if ( amount[0] > 0 )
            --amount[0];
            if ( amount[2] > 0 )
            --amount[2];
        }

        else if ( amount[1] >= amount[0] && amount[2] >= amount[0] ) {
            if ( amount[1] > 0 )
            --amount[1];
            if ( amount[2] > 0 )
            --amount[2];
        }
        minSeconds++;
    }

    return minSeconds;
}