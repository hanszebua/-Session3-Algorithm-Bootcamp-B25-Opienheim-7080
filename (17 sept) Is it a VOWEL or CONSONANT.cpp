// Hans Jonathan Zebua
#include <stdio.h>

int main () {
	char C;
	scanf("%c", &C);
	if (C == 'A' || C == 'I' || C == 'U' || C == 'E' || C == 'O') {
		printf("Vowel");
	} else {
		printf("Consonant");
	}
	
	return 0;
}
