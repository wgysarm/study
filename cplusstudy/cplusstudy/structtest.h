#ifndef _STRUCTTEST_H_
#define _STRUCTTEST_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "structtest.h"

	typedef struct TeacherStruct{
		char name[32];
		char title[32];
		int age;
		char address[128];
		char *school;
		int studentnum;
		char **student;
	}TeacherStruct;
int printStruct(struct TeacherStruct t);

int testStruct(void);
#ifdef __cplusplus
}
#endif

#endif