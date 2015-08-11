/* File: chars.c */
#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char s[6], c[6];
	printf("Enter a string:\n");
	
	for(i = 0; i<6;i++){
		s[i] = getchar();
	}
	
	for(i = 0; i<6;i++){
		putchar(s[5-i]);
	}
}

