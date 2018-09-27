#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	FILE *F;
	int i;
	char t;

	(void)ac;
	F = fopen(av[1], "r");
	i = 0;
	while( fscanf(F, "%c", t) >= 0 )
		i++;
	printf("%d", i);
}

