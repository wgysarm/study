

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif

int trimSpace(char * const str, char **trimstr)
{
	char *pstr;
	char *ptrimstr;
	
	pstr = str;
	
	ptrimstr = (char *)malloc(strlen(str));

	printf("the str:%s\n",pstr);

	strncpy(ptrimstr,pstr,(strlen(str)+1));

	printf("the ptrimstr:%s\n",ptrimstr);

	*trimstr = ptrimstr;

	return 0;
}



#ifdef __cplusplus
}
#endif
