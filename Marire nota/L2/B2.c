#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c,i=0,n,x,*a,k=-1;
	printf("c=");
	scanf("%d", &c);
	printf("n=");
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	while (i < n)
	{
		printf("nr%d=", i + 1);
		scanf("%d", &x);
		if (x >> c & 1)
			a[++k] = x;
		i++;
	}
	if (k != -1)
		for (i = 0;i <= k;i++)
			printf("%d ", a[i]);
	system("pause");
	return 0;
}