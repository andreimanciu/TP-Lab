#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void * b)
{
	return (*(char *)a - *(char *)b);
}
void swap(char* a, char* b)
{
	char t = *a;
	*a = *b;
	*b = t;
}

int varf(char *str, char first, int l, int h)
{
	int varfindex = l;
	for (int i = l + 1; i <= h; i++)
		if (str[i] > first && str[i] < str[varfindex])
			varfindex = i;

	return varfindex;
}
void permutari(char *str)
{
	int l = strlen(str);
	qsort(str, l, sizeof(char), cmp);
	int gata = 0;
	while (!gata)
	{
		printf("%s \n", str);

		int i;
		for (i = l - 2; i >= 0; --i)
			if (str[i] < str[i + 1])
				break;
		if (i == -1)
			gata = 1;
		else
		{
			int varfindex = varf(str, str[i], i + 1, l - 1);
			swap(&str[i], &str[varfindex]);
			qsort(str + i + 1, l - i - 1, sizeof(str[0]), cmp);
		}
	}
}
int main()
{
	char str[100];
	printf("Introduceti sirul:");
	scanf("%s", str);
	permutari(str);
	system("pause");
	return 0;
}