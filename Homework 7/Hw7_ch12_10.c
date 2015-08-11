#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i;
	char s[4][20];
	double d[4], sum = 0;
	
	printf("Enter four numbers:\n");
	
	for(i = 0; i<4; i++){
		scanf("%s", s[i]);
		d[i] = atof(s[i]);
		printf("That number is %lf.\n", d[i]);
		sum += d[i];
	}
	printf("The sum of those numbers is %lf.\n", sum);
}

