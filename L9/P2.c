#include <stdio.h>
#include <stdlib.h>
int pozi, pozs;
int sumamaximastanga, sumamaximadreapta, sumamaximaprinmijloc;
int maximum(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	return c;
}
int sumaprinmijloc(int v[], int s, int m, int d)
{
	int sumastanga = -1000;
	int sum = 0;
	int i;
	int sumadreapta = -1000;
	for (i = m; i >= s; i--)
	{
		sum = sum + v[i];
		if (sum > sumastanga)
		{
			sumastanga = sum;pozi = i;
		}
	}
	sum = 0;
	for (i = m + 1; i <= d; i++)
	{
		sum = sum + v[i];
		if (sum > sumadreapta)
		{
			sumadreapta = sum;pozs = i;
		}
	}
	return (sumastanga + sumadreapta);
}
int sumamaxima(int v[], int s, int d)
{
	if (s == d)
	{
		return v[d];
	}

	int m = (s + d) / 2;
	sumamaximastanga = sumamaxima(v, s, m);
	sumamaximadreapta = sumamaxima(v, m + 1, d);
	sumamaximaprinmijloc = sumaprinmijloc(v, s, m, d);
	return maximum(sumamaximastanga, sumamaximadreapta, sumamaximaprinmijloc);
}

int main()
{
	int i, n =9;
	int v[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	// citirea elementelor manual
	/*printf("n=");
	scanf("%d", &n);
	printf("introduceti el\n");
	for (i = 0;i < n;i++)
	{
		printf("v[%d]=", i + 1);
		scanf("%d", v[i]);
	}*/
	printf("suma maxima:%d\n", sumamaxima(v, 0, 9));
	printf("el sumei:");
	for (i = pozi;i <= pozs;i++)
		printf("%d ", v[i]);
	system("pause");
	return 0;
}