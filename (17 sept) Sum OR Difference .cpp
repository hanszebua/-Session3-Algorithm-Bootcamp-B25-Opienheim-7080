// Hans Jonathan Zebua
#include <stdio.h>

int main () {
	int N1, N2;
	scanf("%d %d", &N1, &N2);
	if (N1 > N2) {
		printf("%d", N1-N2);
	} else{
		printf("%d", N1+N2);
	}
	
	return 0;
}
