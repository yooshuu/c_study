#include <stdio.h>

void main()
{
	int a;
	printf("양의 정수 입력 : ");
	scanf("%d", &a);

	if ( a <= 0 )
		printf("양의 정수가 아닙니다. \n");

	int i = 1;

	while ( i <= a )
	{
		if ( i % 2 == 0 )
			printf("%d ", i);
		i++;
	}
}
