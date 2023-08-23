#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("main.c", "w");

    if(fp == NULL){
        fprintf(stderr, "Can't create \"main.c\".\n");
        exit(EXIT_FAILURE);
    }
    
    fprintf(fp, "#include<stdio.h>\n");
    fprintf(fp, "int main(){\n");
    fprintf(fp, "\treturn 0;\n");
    fprintf(fp, "}\n");

    if(fclose(fp) != 0){
        fprintf(stderr, "Closing fail.\n");
        exit(3);
    }

    return 0;
}

