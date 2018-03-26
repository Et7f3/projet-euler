#include "outils.h"

int mode_d_emploi(int n, ...)
{
	int i;
	va_list ap;

	i = 0;
	va_start(ap, n);
	printf("mode d'emploi: "NOM_DU_LOGICIEL);
	while (i++ < n)
		printf(" arg%d", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("\t-arg%d %s\n", i, va_arg(ap, char*));
	va_end(ap);
	return (EXIT_FAILURE);
}