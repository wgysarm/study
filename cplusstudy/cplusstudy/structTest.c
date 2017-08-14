

#include "structtest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif


int printStruct(struct TeacherStruct t)
{
	int i = 0;
	printf("name:%s\n",t.name);
	printf("title:%s\n",t.title);
	printf("age:%d\n",t.age);
	printf("address:%s\n",t.address);
	printf("school:%s\n",t.school);
	for(i = 0; i < t.studentnum; i++)
	{
		printf("student %d:%s\n",i,t.student[i]);
	}

	return 0;
}

int testStruct(void)
{
	struct TeacherStruct t1={"wgy","professor",10,"beijing"};
	struct TeacherStruct t2={0} ;
	int i = 0;
	int j = 0;
	char school[] = "bit ";
	char school2[] = "qsinghua";
	char str[20];
	char **student = (char**)malloc(t1.studentnum*sizeof(char*));
	char **student2 = (char**)malloc(t2.studentnum*sizeof(char*));
	char **worker = (char**)malloc(10*sizeof(char*));
	t1.student = student;
	t1.studentnum = 3;
	t1.school = school;

	for(j = 0; j <t1.studentnum; j++)
	{
		student[j] = (char*)malloc(20);
		sprintf(str,"student %d",j);
		strcpy(student[j],str);
	}
	strcpy(t2.address,"shanghai");
	strcpy(t2.name,"sunnan");
	strcpy(t2.title,"assist professor");
	t2.age = 12;
	t2.school = school2;
	t2.studentnum = 4;

	for(j = 0 ; j < t2.studentnum ; j++)
	{
		student2[j] = (char*)malloc(20);
		sprintf(str,"studet %d",j);
		strcpy(student2[j],str);
	}
	t2.student = student2;

	printStruct(t1);
	printStruct(t2);

	for(i = 0 ;i < t1.studentnum ; i++)
	{
		free(student[i]);
	}
	free(student);

	for(i = 0 ;i < t2.studentnum ; i++)
	{
		free(student2[i]);
	}
	free(student2);


	for(i = 0 ;i < 10; i++)
	{
		worker[i] = (char*)malloc(10*sizeof(char));
		sprintf(str,"worker %d",i);
		strcpy(worker[i],str);
	}

	for(i = 0; i <10 ; i++)
	{
		printf("%d: %s\n",i,*worker);
		worker++;
	}
	return 0;
}

#ifdef __cplusplus
}
#endif
