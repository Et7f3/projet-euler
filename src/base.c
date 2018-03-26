#include "outils.h"

int execute(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	if (argc <= 1)
		return mode_d_emploi(1, "description de l'argument 1");
	else
		return execute(argc, argv);
}

int execute(int argc, char* argv[])
{
	printf("ok");
	return (EXIT_SUCCESS);
}