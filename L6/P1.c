#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100][100],i=0,j=0,k=0,s=0,nr,n;
	FILE *f = fopen("abc.txt", "rt");
	if (f == NULL)
		printf("nu s a putut deschide");
	else
	{
		while (!feof(f))
		{
			fscanf(f, "%d", &nr);
			a[i][j] = nr;
			if (j == k) { i++;j = 0;k++; }
				else j++;
		}
	}
	fclose(f);
k = 0;
n = i;
s = a[0][0];
i = 1;j = 0;
while (i < n)
{
	if (a[i][j] > a[i][j + 1]) {s += a[i][j];i++;}
	else { j++;s += a[i][j];i++; }
}
printf("Suma maxima este:%d", s);
system("pause");
return 0;
}