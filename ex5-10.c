#include <stdio.h>

void main()
{
	int year;

	printf("Ãâ»ı³âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%d", &year);

	switch (year % 12 )
	{
		case 0 : printf ("¿ø¼şÀÌ¶ì \n"); break;
		case 1 : printf ("´ß¶ì \n"); break;
		case 2 : printf ("°³¶ì \n"); break;
		case 3 : printf ("µÅÁö¶ì \n"); break;
		case 4 : printf ("Áã¶ì \n"); break;
		case 5 : printf ("¼Ò¶ì \n"); break;
		case 6 : printf ("È£¶ûÀÌ¶ì \n"); break;
		case 7 : printf ("Åä³¢¶ì \n"); break;
		case 8 : printf ("¿ë¶ì \n"); break;
		case 9 : printf ("¹ì¶ì \n"); break;
		case 10 : printf ("¸»¶ì \n"); break;
		case 11 : printf ("¾ç¶ì \n"); break;
	}
}
