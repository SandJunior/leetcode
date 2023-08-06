#include <stdio.h>
#include <stdlib.h>

int fillCups(int* amount, int amountSize){

    int waterCold = 0;
    int waterWarm = 0;
    int waterHot = 0;

    int waterColdWarm = 0;
    int waterWarmHot = 0;
    int waterColdHot = 0;

    int minSeconds = 0;

    for (int i = 0; i < amountSize; i++) {
        if (*amount[i] == NULL) {
            return 0;
        }

        while (*amount[i] != NULL) {
        if (*amount[i] == 0 && *amount[i] != 1 && *amount[i] != 2) {
            waterCold++;
            minSeconds++;
        }

        if (*amount[i] == 1 && *amount[i] != 0 && *amount[i] != 2) {
            waterWarm++;
            minSeconds++;
        }

        if (*amount[i] == 2 && *amount[i] != 0 && *amount[i] != 1) {
            waterHot++;
            minSeconds++;
        }

        if (*amount[i] == 0 && *amount[i] == 1) {
            waterColdWarm++;
            minSeconds++;
        }

        if (*amount[i] == 1 && *amount[i] == 2) {
            waterWarmHot++;
            minSeconds++;
        }

        if (*amount[i] == 0 && *amount[i] == 2) {
            waterColdHot++;
            minSeconds++;
        }
        }
    /*return waterCold;
    return waterWarm;
    return waterHot;

    return waterColdWarm;
    return waterWarmHot;
    return waterColdHot;*/

    return minSeconds;
    }
}

int main() {
    int amountSize = 3;
    int* amount[amountSize] = {1, 4, 2};

    int minSeconds = fillCups(amount)
    printf("Resultado: %d", minSeconds);

    return 0;
}