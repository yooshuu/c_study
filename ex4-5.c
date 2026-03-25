#include <stdio.h>

void main()
{
	int a = 100, b = 200;

	printf(" %d == %d 는 %d 이다. \n", a, b, a==b);
	printf(" %d != %d 는 %d 이다. \n", a, b, a!=b);

	printf(" %d > %d 는 %d 이다. \n", a, b, a>b);
	printf(" %d < %d 는 %d 이다. \n", a, b, a<b);

	printf(" %d >= %d 는 %d 이다. \n", a, b, a>=b);
	printf(" %d <= %d 는 %d 이다. \n", a, b, a<=b);

	printf(" %d = %d 는 %d 이다. \n", a, b, a=b);
}
