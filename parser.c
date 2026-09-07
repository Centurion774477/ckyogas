#include <stdio.h>

void parse(char* file) {
    FILE *file = fopen(file, "r");
    if (file == NULL) {   
        printf("external.fileSys: something went wrong with trying to open %s.", file);
        printf("This could be triggered by two things: the file either doesn't exist");
        printf("--or the file's permissions blocked Kyogas.");
        return;
    }
    else {
        parseShitOrSomethingIdk(file);
    }
}


