#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * shortestCompletingWord(char * licensePlate, char ** words, int wordsSize){
    char pal[]= "steps";
    char* result;
    char lecOne;
    char lecTwo;

    for (int i = 0; i<wordsSize; i++){
        if(words<wordsSize){
            result[i+1] = pal[i];
            lecOne++;
        }
    }

    for(int j = 0; j<wordsSize; j++){
        if(words<wordsSize){
            result[j+1] = pal[j];
            lecTwo++;
        }
    }
    strcat(lecOne, lecTwo);
    puts(lecOne);

    wordsSize = 0;
    return NULL;
}

int main(){
    char licensePlate = "1s3 PSt";
    char words[] = {"step", "steps", "stripe","stepple"};
    int wordsSize = 4;

    shortestCompletingWord(licensePlate, words, wordsSize);

    for (int i=0; i<wordsSize; i++){
    printf("%c\n", licensePlate[i]);
    }

    return 0;
}