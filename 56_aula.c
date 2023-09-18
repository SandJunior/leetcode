#include <stdio.h>
#include <stdlib.h>

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int**       returnColumnSizes, int* start){
    int* left = start;  //protótipo de inicio de sublista à esquerda
    int* right = start; //protótipo de inicio de sublista à direita
    int* prev = NULL;   //o anterior é declarado como vazio

    int* returnSize = (int *)malloc(sizeof(int));       //protótipo de malloc declarado na descrição
    int** returnColSizes = (int *)malloc(sizeof(int));  //protótipo de malloc declarado na descrição

    
    //a moral desse trecho é uma leitura dos elementos iniciais e finais do vetor, a partir disso,
    //comparando os mesmos e no fim concatenando em um vetor final
    /*if (intervalsSize != NULL && intervalsColSize != NULL) {
        for (int i = 0; i<intervalsSize; i++) {
            for (int j = 0; j<intervalsColSize; i++) {
                if (intervalsSize[i] <= intervalsColsSize[j]) {
                    intervals[i] = intervalsSize[i] && intervalsColSize[j];
                } else {
                    return intervals[i][j];
                }
            }
        }
    }*/

    //a moral desse outro trecho é só a base de um algoritmo merge genérico, não sei se cabe ao caso aplicar 
    while ( left != NULL && right != NULL ) {

        if (prev != NULL ) {
        
        }

        if ( left != NULL ) {
    
        }

        if ( right != NULL ) {

        }

     return returnSize;
    }
}

int main() {
    int intervals[4] = [[1,3],[2,6],[8,10],[15,18]];

    printf("[%d,%d]", intervals[]);
 }