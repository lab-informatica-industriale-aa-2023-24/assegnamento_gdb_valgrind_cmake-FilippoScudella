// valgrind2.c

#include <stdio.h>
#include <stdlib.h>


int main()
{
	char *p;

	p = malloc(19 * sizeof(char));
	if(p == NULL){
		printf("Errore: malloc() fallita in main()\n");
		exit(EXIT_FAILURE);
	}
	free(p);

	p = malloc(12 * sizeof(char));
	if(p == NULL){
		printf("Errore: malloc() fallita in main()\n");
		exit(EXIT_FAILURE);
	}
	free(p);

	p = malloc(16 * sizeof(char));
	if(p == NULL){
		printf("Errore: malloc() fallita in main()\n");
		exit(EXIT_FAILURE);
	}
	free(p);

	return 0;
}
