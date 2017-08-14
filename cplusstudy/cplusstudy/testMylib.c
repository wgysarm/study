

#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#ifdef __cplusplus
extern "C"
{
#endif

int testTrimStr(void)
{
	char *str = "this is a trimspace test!";

	char **trimstr = (char**)malloc(sizeof(int*));

	trimSpace(str,trimstr);

	printf("%s\n",*trimstr);

	if(trimstr != NULL)
	{
		free(trimstr);
	}

	return 0;
}

#ifdef __cplusplus
}
#endif
