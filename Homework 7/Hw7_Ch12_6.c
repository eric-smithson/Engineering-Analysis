/* File: chars.c */
#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char s[4][30];
	printf("Enter four strings:\n");
	for(i = 0; i<4; i++){
		scanf("%s",s[i]);
	}
	
	//char s[2][30] = {"bthis is a string", "bthis is also a string", "This is a string not starting with b"
	//					"I like strings"};
	printf("The strings that start with \"b\" are as follows:\n");
	for(i = 0; i<4; i++){
	if(s[i][0] == 'b')
		printf("%s\n", s[i]);
	}
}

