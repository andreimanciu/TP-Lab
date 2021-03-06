#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, i,c=0,p;
	printf("Dati nr:");
	scanf("%d", &a);
	p = a >> 31 & 1;
	for (i = 31;i >= 0;i--)
		if (a >> i & 1) 
		{
			printf("1");c++;
		}
			else printf("0");
	if (p == 0)
	{
		if (c == 0)printf("\nNr este 0");
			else printf("\nNr este pozitiv");
	}
	else printf("\nnr este negativ");
	system("pause");
	return 0;
}