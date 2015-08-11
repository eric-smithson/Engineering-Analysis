//Eric Smithson
#include <stdio.h>
#include <stdlib.h>

struct company{
	char name[32];
	char address[32];
	char phone[32];
	char credit[32];
} Apple = {"Apple", "101 Microsoft Copied Mac Drive", "555-303-1231", "Good"}, s;

int main() {
	puts("Enter Your company's name:");
	gets(s.name);
	puts("Enter Your company's address:");
	gets(s.address);
	puts("Enter Your company's phone number:");
	gets(s.phone);
	puts("Enter Your company's credit score (good/bad):");
	gets(s.credit);
	
	
	printf("Your company's name is %s, it's address is %s, it's phone number is %s, it's credit score is %s", s.name, s.address, s.phone, s.credit);
	
	
	return 0;
}
