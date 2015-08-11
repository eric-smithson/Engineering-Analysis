#include <stdio.h>

int main(){
	
	//a
	int *number;
	printf("%d\n", number);
	//*number changed to number
	
	
	//b
	float *realPtr;
	int *integerPtr;
	integerPtr = (int*)realPtr;
	//cast realPtr as int*
	
	
	
	//c
	int *x, y;
	x = &y;
	//x = y is an invalid operation because y is an interger and x is a ptr. We can assign x to have the addres of y however.
		
	//d 	
	char s[] = "this is a character array";
	char *sPtr = s;
	for(; *sPtr != '\0'; sPtr++)
		printf("%c", *sPtr);
	//a character array is a constant pointer so we can't increment it.
}
