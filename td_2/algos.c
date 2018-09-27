#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#include "constantes.h"

int T[N];

void	ecrire()
{
	FILE *F;
	int a;
	int i;

	F = fopen("nombres2.data", "w");
	srand(getpid());
	for(i=0; i<N; i++)
	{
		fprintf(F, "%6d\n", T[i]);
	}
	fclose(F);
}

void	lecture()
{
	FILE	*F;
	int		i;

	i = 0;
	F = fopen(NOMFIC, "r");
	while( fscanf(F, "%d", &T[i]) >= 0 )
		i++;
	fclose(F);
}

int		recherche(int x)
{
	int		i;
	int		cmp;

	cmp = 0;
	for( i=0; i<N; i++)
	{
		cmp++;
		if( T[i] == x)
		{
			printf("nb de comparaisons: %d\n", cmp);
			return 1;
		}
	}
	printf("nb de comparaisons: %d\n", cmp);
	return 0;
}

int		stat_recherche(int x)
{
	int		i;
	int		cmp;

	cmp = 0;
	for( i=0; i<N; i++)
	{
		cmp++;
		if( T[i] == x)
		{
			return cmp;
		}
	}
	return cmp;
}

int		main()
{
	int i;
	int moyenne;

	lecture();
	ecrire();
	for(i=0; i<N; i++)
		printf("%d\n", T[i]);
	printf("recherche : %d\n", recherche(339153));

	srand(getpid());
	moyenne = stat_recherche(rand()%(5*MAX));
	for( i=0; i<10000 - 1; i++)
	{
		moyenne = (moyenne + stat_recherche(rand()%(5*MAX)) ) / 2;
	};
	printf("moyenne de cmp: %d\n", moyenne);
	return 0;
}
