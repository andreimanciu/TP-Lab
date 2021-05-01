#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int cmp(const void *a, const void *b)
{
	char *ia = (char*)a;
	char *ib = (char*)b;
	return (int)(ia - ib);
}
void comb(char *n)
{
	int l = strlen(n);
	qsort(n, l, sizeof(char), cmp);
	int k = 0, m, i, j, t;

	while (k < l)
	{
		m = k;

		for (i = k;i < l;i++)
		{
			for (j = k;j <= i;j++)
				printf("%c",n[j]);

			printf("\n");
		}

		for (t = m + 2;t < l;t++)
			printf("%c%c \n", n[m], n[t]);

		k++;
	}
}


int main()
{
	char n[100];
	scanf("%s", n);
	comb(n);
	system("pause");
	return 0;
}
