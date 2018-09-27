#include <stdio.h>

int		main()
{
	printf("char = %d\n", sizeof(char));
	printf("int = %d\n", sizeof(int));
	printf("double %d\n", sizeof(double));
	printf("char* = %d\n", sizeof(char*));
	printf("void* = %d\n", sizeof(void*));
	printf("int* = %d\n", sizeof(int*));
	printf("double* = %d\n", sizeof(double*));
	printf("int** = %d\n", sizeof(int**));
	printf("int[10] = %d\n", sizeof(int[10]));
	printf("char[7][3] = %d\n", sizeof(char[7][3]));
	//printf("int[] = %ld\n", sizeof(int[]));
}
