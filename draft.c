#include<stdio.h>
#include<stdlib.h>
int main(){
    // Change "main.c" to "main.cpp"
    FILE *fp = fopen("main.cpp", "w");

    if(fp == NULL){
        fprintf(stderr, "Can't create \"main.cpp\".\n");
        exit(EXIT_FAILURE);
    }
    
    // Add head files.
    fprintf(fp, "#include <iostream>\n");
    fprintf(fp, "#include <vector>\n");
    fprintf(fp, "#include <string>\n");
    // Add using space.
    fprintf(fp, "using std::cin;\n");
    fprintf(fp, "using std::cout;\n");
    fprintf(fp, "using std::endl;\n");
    fprintf(fp, "using std::vector;\n");
    fprintf(fp, "using std::string;\n");
    fprintf(fp, "\n");
    // body.
    fprintf(fp, "int main(){\n");
    fprintf(fp, "\n\treturn 0;\n");
    fprintf(fp, "}\n");

    if(fclose(fp) != 0){
        fprintf(stderr, "Closing fail.\n");
        exit(3);
    }

    return 0;
}

