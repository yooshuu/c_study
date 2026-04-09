#include <stdio.h>

void main()
{
	int num;

	do {
		printf("숫자를 입력하세요. :");
		scanf("%d", &num);

		switch(num)
		{
			case 1 : printf("선택:1번 \n"); break;
			case 2 : printf("선택:2번 \n"); break;
			case 3 : printf("선택:3번 \n"); break;
			case 4 : printf("선택:4번 \n"); break;
			default : printf("잘못된 입력입니다. \n");
		}
	} while (num < 1 || num > 4);
}
