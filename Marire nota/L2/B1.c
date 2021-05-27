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
int schimba(int x)
{
	
	int a = log2(x);
	int m = 1 << a;
	m = m | m - 1;
	x = x ^ m;
	return x;
}
int main()
{
	int i = 0, n,x;
	printf("n=");
	scanf("%d", &n);
while(i<n)
{
	printf("\nnr%d=", i + 1);
	scanf("%d", &x);
	afis(x);
	x=schimba(x);
	printf("\n");
	afis(x);
	printf("\nInv binar este:%d",x);
	i++;
}
system("pause");
return 0;
}