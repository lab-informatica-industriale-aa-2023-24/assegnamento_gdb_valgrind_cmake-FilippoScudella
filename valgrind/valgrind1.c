// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>
#include <stdio.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int));
	if(x == NULL){
		printf("Errore: malloc() fallita in f()\n");
		exit(EXIT_FAILURE);
	}
	x[9] = 0;
	free(x);
}

int main(void)
{
	f();
	return 0;
}
