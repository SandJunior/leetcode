#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes);
int compare(const void *a, const void *b);

int main() {
    int intervals[4][2] = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    int intervalsSize  = 4;
    int intervalsColSize = 2;
    int returnSize;
    int* returnColumnSizes;

    int **intervalsPtr = (int **)malloc(sizeof(int *) * intervalsSize);
    for (int i = 0; i < intervalsSize; i++) {
        intervalsPtr[i] = (int *)malloc(sizeof(int) * intervalsColSize);
        for (int j = 0; j < intervalsColSize; j++) {
            intervalsPtr[i][j] = intervals[i][j];
        }
    }

    int** merged = merge(intervalsPtr, intervalsSize, &intervalsColSize, &returnSize, &returnColumnSizes);

    for (int i = 0; i < returnSize; i++) {
        printf("[%d, %d] ", merged[i][0], merged[i][1]);
        free(merged[i]);
    }
    printf("\n");

    free(merged);
    free(returnColumnSizes);

    for (int i = 0; i < intervalsSize; i++) {
        free(intervalsPtr[i]);
    }
    free(intervalsPtr);

    return 0;
}

/*
====================
int compare
 Função que ordena os intervalos com base no início 
====================
*/

int compare(const void *a, const void *b) {
    return ((int *)a)[0] - ((int *)b)[0];
}

/*
====================
int** merge
 Função que realiza todo o processo de concatenação entre os intervalos,
 retornando uma matriz de intervalos concatenados
====================
*/

int** merge ( int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes ) {
    int start = intervals[0][0];
    int end = intervals[0][1];

    if ( intervalsSize == 0 ) {
        *returnSize = 0;
        return NULL;
    }

    qsort ( intervals, intervalsSize, sizeof(int*), compare );

    int** merged = ( int**)malloc( sizeof(int*) * intervalsSize );
    *returnColumnSizes = ( int*)malloc( sizeof(int) * intervalsSize );
    int mergedCount = 0;

    if (intervalsSize != NULL) {
    for ( int i = 1; i < intervalsSize; i++ ) {
        if ( intervals[i][0] <= end ) {
            end = fmax( end, intervals[i][1] );
        } else {
            merged[mergedCount] = (int*)malloc(sizeof(int) * 2);
            merged[mergedCount][0] = start;
            merged[mergedCount][1] = end;
            ( *returnColumnSizes )[mergedCount] = 2;
            mergedCount++;

            start = intervals[i][0];
            end = intervals[i][1];
        }
    }

    merged[mergedCount] = (int*)malloc(sizeof(int) * 2);
    merged[mergedCount][0] = start;
    merged[mergedCount][1] = end;
    ( *returnColumnSizes )[mergedCount] = 2;
    mergedCount++;
    }

    *returnSize = mergedCount;
    return merged;
}
