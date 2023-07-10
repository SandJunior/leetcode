#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/*
====================
shortestCompletingWord
 Função que encontra a palavra mais curta completa.
====================
*/

char* shortestCompletingWord ( char* licensePlate, char** words, int wordsSize ) {
    int contadorPlaca[26] = {0}, contadorPalavras[26] = {0};
    int menorTamanho = INT_MAX;
    int j;
    char* resultado = NULL;


    // Contador: aparição de letras em licensePlate
    for ( int i = 0; licensePlate[i] != '\0'; i++ ) {
        char c = licensePlate[i];
        if ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) {
            if ( c >= 'A' && c <= 'Z' ) {
                c = c - 'A' + 'a'; 
            }
            contadorPlaca[c - 'a']++;
        }
    }

    // Iteração: cada palavra do array
    for ( int i = 0; i < wordsSize; i++ ) {
        // Reinicialização: reinicia do array contadorPalavras p/ cada palavra
        memset( contadorPalavras, 0, sizeof( contadorPalavras ) );

        // Contador: aparição de letras na atual palavra
        for ( j = 0; words[i][j] != '\0'; j++ ) {
            char c = words[i][j];
            if ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) {
                if ( c >= 'A' && c <= 'Z' ) {
                    c = c - 'A' + 'a'; 
                }
                contadorPalavras[c - 'a']++;
            }
        }

        //  Verificador: verifica se cada palavra atual é uma palavra conclusiva
        for ( j = 0; j < 26; j++ ) {
            if ( contadorPlaca[j] > contadorPalavras[j] ) {
                break;
            }
        }

        // Se: palavra atual é uma palavra conclusiva e se é mais curta que a mínima atual
        if ( j == 26 && j - i < menorTamanho ) {
            resultado = words[i];
            menorTamanho = j - i;
        }
    }

    return resultado;
}

int main(){
    char* licensePlate = "1s3 PSt";
    char* words[] = {"step","steps","stripe","stepple"};
    int wordsSize = 4;

    char* resultado = shortestCompletingWord( licensePlate, words, wordsSize );

    printf( "%s\n", resultado );

    return 0;
}