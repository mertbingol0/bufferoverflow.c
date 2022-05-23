#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void vulnerableFunc(char* input) {
    char buffer[60];
    strcpy(buffer, input);
}
 
int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Arguments: <buffer input>\n");
        exit(1);
    }
 
    vulnerableFunc(argv[1]);
 
    printf("Ağla...\n");
    exit(0);
}
