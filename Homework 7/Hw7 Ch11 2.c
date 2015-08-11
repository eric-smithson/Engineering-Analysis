#include <stdio.h>

int main(){
	
	long long int value1 = 100000, value2;
	// (a) Declare the variable llptr to be a pointer to an object of type long long int.
	long long int *llptr;
	
	//(b) Assign the address of variable value1 to pointer variable llptr.
	llptr = &value1;
	
	//(c) Print the value of the object pointed to by llptr.
	printf("value at llptr = %d\n", *llptr);
	
	return 0;
}
