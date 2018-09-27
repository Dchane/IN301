#include <stdio.h>

void	plusun(int a, int *T)
{
	a++;
	T[0] = T[0] + 1;
}

int main() 
{
	int a;
	int T[10];
	a = 7;
	T[0] = 12;
	printf("a = %d et T0 = %d\n", a, T[0]);
	plusun(a,T);
	printf("a = %d et T0 = %d\n", a, T[0]);
}
