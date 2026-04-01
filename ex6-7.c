#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for ( i=1 ; i<=10 ; i++) {
		hap += i;
	}

	printf(" 1에서 10까지의 합 : %d \n", hap);
}
