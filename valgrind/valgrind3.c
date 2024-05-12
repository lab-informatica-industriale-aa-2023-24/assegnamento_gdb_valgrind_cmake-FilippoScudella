// valgrind3.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;
	p = (char *) malloc(20);
	if(p == NULL){
		printf("Errore: malloc() fallita in f()\n");
		exit(EXIT_FAILURE);
	}

	char *s = p;
	for(int n = 0; n < 20; n++) {
		*s = '\0';
		s++;
	}

	s = p;

	for(int n = 0; n < 20; n++) {
		*s = 'A';
		s++;
	}

	free(p);

}
