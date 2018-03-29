#include "outils.h"

int execute(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	if (argc <= 3)
		return mode_d_emploi(3,
		"premier multiple, ex: 3",
		"second multiple, ex: 5",
		"maximum, ex: 1000");
	else
		return execute(argc, argv);
}

int execute(int argc, char* argv[])
{
	int max, m1, m2, i, ret;
	sscanf(argv[1], "%d", &m1);
	sscanf(argv[2], "%d", &m2);
	sscanf(argv[3], "%d", &max);
	i = 0;
	ret = 0;
	while ( i++ < max - 1 )
		if (i % m1 == 0 || i % m2 == 0)
			ret += i;
	printf("ret: %d\n", ret);
	return (EXIT_SUCCESS);
}