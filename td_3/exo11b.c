#include <stdio.h>

int	main()
{
	float tab[10];
	printf("%p\n", tab);
	printf("%f\n", tab[0]);
	printf("%p\n", &tab[0]);
	printf("%p\n", *&tab);
	printf("%f\n", *&tab[0]);
}
