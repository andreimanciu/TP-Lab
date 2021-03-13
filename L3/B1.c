#include <stdio.h>
#include <stdlib.h>
///ex2
void sumaa(int *p, int *suma2, int *n,int *i)
{
	for (*i = *n; *i > 0;--*i)
		p--;
	for (*i = 1;*i <= *n;++*i)
		*suma2 += *p++;
}
int main()
{
	int x = 0;
	///ex1
	int *t,*p, *s = (int*)malloc(sizeof(int)),*n=(int*)malloc(sizeof(int)),*i = (int*)malloc(sizeof(int));
	*s = 0;
	printf("Cate numere doriti:");
	scanf("%d", n);
	p = (int*)malloc((*n) * sizeof(int));
	t = p;
	for (*i = 1;*i <= *n;++*i)
	{
		printf("p[%d]=", *i);
		scanf("%d", p++);
	}
	while (t != p)
		*s+=*t++;
	printf("\nsuma elementelor este:%d", *s);
	///ex2
	sumaa(p, &x, n,i);
	printf("\n%d", x);
	///ex3
	for (*i = *n; *i > 0;--*i)
		p--;
	t = p;
	printf("\nelementele vect sunt");
	for (*i = 0;*i < *n;++*i)
		printf("\n%d", *p++);
	for (*i = *n; *i > 0;--*i)
		p--;
	t = p;
	*s = *p;
	t++;
	*p = *t;
	*t = *s;
	t--;
	printf("\nelementele dupe interchimbare sunt");
	for (*i = 0;*i < *n;++*i)
		printf("\n%d", *t++);
	system("pause");
	return 0;
}