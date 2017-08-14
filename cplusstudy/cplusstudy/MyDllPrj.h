
#ifndef _TESTDLL_H_
#define _TESTDLL_H_


#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
	extern "C"
	{
#endif

#ifdef DLL_IMPLEMENT
	#define MYAPIDLL __declspec(dllexport)
#else
	#define MYAPIDLL __declspec(dllimport)
#endif

MYAPIDLL int  functest(void);

MYAPIDLL int  dllFuncTest(void);

#ifdef __cplusplus
	}
#endif

#endif
