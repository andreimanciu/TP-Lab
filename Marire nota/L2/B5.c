//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int *a, n, i,s=0;
//	printf("n=");
//	scanf("%d", &n);
//	a = (int*)malloc(n * sizeof(int));
//	for (i = 0;i < n;i++)
//	{
//		printf("a[%d]=", i + 1);
//		scanf("%d", &a[i]);
//	}
//	for (i = 0;i < n - 1;i++)
//		s = a[i] | a[i + 1];			//operatia BINARA "SAU" ("OR") aplicata pe un sir de “N” numere intregi 
//	printf("%d", s);					// va returna de fiecare data un nr impar daca in sir se afla
//	system("pause");					// un element impar, insa daca sirul este plin de elemente pare
//	return 0;							// aceasta operatie va returna un nr par.
//}