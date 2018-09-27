#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int	main()
{
	int a;
	int i;
	
	srand(getpid());
	for(i=0; i<10000; i++)
	{
		a = rand()%1000;
		printf("%d\n", a);
	}
}

