#include "outils.h"

int mode_d_emploi(char *nom, int n, ...)
{
	int i;
	va_list ap;

	i = 0;
	va_start(ap, n);
	printf("Ce logiciel est une solution de l\'"NOM_DU_LOGICIEL
		" du site https://projecteuler.net\r\nmode d'emploi: %s", nom);
	while (i++ < n)
		printf(" arg%d", i);
	printf("\r\n");
	i = 0;
	while (i++ < n)
		printf("\t-arg%d %s\r\n", i, va_arg(ap, char*));
	va_end(ap);
	return (EXIT_FAILURE);
}