#include <stdio.h>
#include <stdlib.h>
int* suma(int a, int b,int *p)
{
	*p =a + b;
	return p;
}
int main()
{
	///ex1
	int a = 10, *p = &a,b[5],*c=(int*)malloc(sizeof(int));
	printf("%d", *p);///valoarea lui a 10
	printf("\n%d", ++*p);///valoarea lui a incrementata 11
	*p = 10;///valoarea lui a devine 10
	printf("\n%d", --*p);///valoarea lui a decrementata 9
	///pointerul ramane la aceeasi adresa , modificata doar valoarea adresei
	p = b;///p ia adresa lui b[0], poate afisa valoarea lui b[0]
	printf("\n%p", p);
	printf("\n%p", ++p);///p ia adresa lui b[1], poate afisa valoare lui b[1]
	p=&b;///p ia adresa lui b[0], poate afisa valoarea lui b[0]
	printf("\n%p", --p);///p ia adresa lui b[-1] chiar daca nu exista;merge cu o adresa inapoi fata de adresa lui b,aceasta fiind b[0], poate afisa o valoare oarecare
	///pointerul trece la adrese diferite ,poate sa afiseze valorile adresei respective;in cazul nostru b[1] si o valoare oarecare din cauza ca b[-1] nu exista
	
	///ex 2
	c = suma(4, 5, c);
	printf("\n%d", *c);
	system("pause");
	return 0;
}