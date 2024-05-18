#include<stdio.h>
int main(void) {
	int a, i;
/*
	a % 3 = 1;
	a % 5 = 3;
	a % 7 = 2;
*/
	for (i = 0; i < 100000; i++)
	{
		if (i % 3 == 1)
		{
			if (i % 5 == 3)
			{
				if (i % 7 == 2)
				{
					printf("¨ß¤l¦³%d°¦", i);
					break;
				}
			}
		}
	}
}