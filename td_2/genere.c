#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#include "constantes.h"

void	ecrire()
{
	FILE *F;
	int a;
	int i;

	F = fopen(NOMFIC, "w");
	srand(getpid());
	for(i=0; i<N; i++)
	{
		a = rand()%MAX;
		fprintf(F, "%6d\n", a);
	}
	fclose(F);
}

int		main()
{
	ecrire();
	return 0;
}
