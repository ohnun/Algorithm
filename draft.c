#include<stdio.h>
#include<stdlib.h>
int main(int argv, char **argc){
    // Change "main.c" to "main.cpp"
    FILE *fp = fopen("main.cpp", "w");

    if(fp == NULL){
        fprintf(stderr, "Can't create \"main.cpp\".\n");
        exit(EXIT_FAILURE);
    }

    char ch;
    while(scanf("%c", &ch) == 1){
        fprintf(fp, "%c", ch);
    }
    

    if(fclose(fp) != 0){
        fprintf(stderr, "Closing fail.\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
