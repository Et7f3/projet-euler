#include "outils.h"

int execute(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	if (argc <= 3)
		return mode_d_emploi(argv[0], 3,
		"premier multiple, ex: 3",
		"second multiple, ex: 5",
		"maximum, ex: 1000");
	else
		return execute(argc, argv);
}

int execute(int argc, char* argv[])
{
	int max, m1, m2, ret;
	sscanf(argv[1], "%d", &m1);
	sscanf(argv[2], "%d", &m2);
	sscanf(argv[3], "%d", &max);
	ret = 0;
	while ( --max )
		if (!(max % m1 && max % m2))
			ret += max;
	printf("ret: %d\n", ret);
	return (EXIT_SUCCESS);
}