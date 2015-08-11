#include <stdio.h>

void printTriangle(int n);

int main(){
	
	
	printTriangle(4);
	printTriangle(8);
	return 0;
}

printTriangle(int n){
	
	int i, j, k;
	for(i=0; i < n; i++){
		for(k=0; k < n-1-i; k++){
			printf(" ");
		}
		for(j = 0; j <= i*2; j++){
			printf("*");	
		}
		printf("\n");
	}
	return 0;
	
}
