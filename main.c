#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char *str = NULL; // Array to store the string.
	int str_len = 0;  // Length of array.
	char c;
	// store input
	while((c = getchar()) != '\n'){
		str = (char*)realloc(str, (str_len + 1) * sizeof(char));
		str[str_len++] = tolower(c);
	}
	// print string
	for(int i = 0; i < str_len; i++){
		printf("%c%s", str[i], i == str_len - 1 ? "\n" : "");
	}

	// release mem
	free(str);
	return 0;
}
