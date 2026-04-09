#include <stdio.h>

void main()
{
	int hap = 0;
	int i=1;
	
	while ( i <= 100 )
	{
		hap += i;
		i++;
	}

	printf("1~100까지의 합은 %d 이다. \n", hap);
}
