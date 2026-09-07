#include <stdio.h>

void parse(char* file) {
    FILE * file = fopen(file, "r");
    if (fp == NULL) {   
        printf("external.fileSys: The file you tried to parse does not exist in this context.");
        return;
    }
    else {
        parseShitOrSomethingIdk(file);
    }
}


