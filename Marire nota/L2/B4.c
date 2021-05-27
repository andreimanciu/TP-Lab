#include <stdio.h>
#include <stdlib.h>
void afis(int x)
{
	int i;
	for (i = 7;i >= 0;i--)
	{
		if (x >> i & 1)printf("1 ");
		else printf("0 ");
	}
}
int main()
{
	int a, b,p=0;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	while (a != 0)
	{
		p += b;
		a--;
	}
	printf("%d\n", p);
	afis(p);
	system("pause");
	return 0;
}