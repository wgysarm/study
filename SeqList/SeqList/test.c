
#include <stdio.h>
#include "seqlist.h"


typedef struct listnode{
	int id ;
	char desc[20];

}listnode;


int main()
{
	int len = 0;
	int ret = 0;
	listnode a1,a2,a3,a4,a5,a6,a7;
	int i = 0;
	SeqList *list = NULL;
	SeqlistNode *tlistnode = NULL;
	listnode *tl = (listnode *)tlistnode;

	list = seqlist_create(6);
	a1.id =1;
	a2.id =2;
	a3.id =3;
	a4.id = 4;
	a5.id = 5;
	a6.id =6;
	a7.id = 7;

	if(list == NULL)
	{
		printf("seqlist_create error!\n");
		return -1;
	}

	len = seqlist_length(list);
	printf("len = :%d\n", len);

	printf("len = :%d\n", seqlist_length(list));
	seqlist_insert(list, &a7, 0);
	seqlist_insert(list, &a6, 0);
	seqlist_insert(list, &a5, 0);
	seqlist_insert(list, &a4, 0);	

	seqlist_insert(list, &a3, 0);
	seqlist_insert(list, &a2, 0);


	seqlist_insert(list, &a1, 0);
	seqlist_insert(list, &a1, 0);
	seqlist_insert(list, &a1, 0);

	printf("len = :%d\n", seqlist_length(list));
	for(i = 0; i < seqlist_length(list) ; i++)
	{
		
		tlistnode = seqlist_getnode(list,i);

		tl = (listnode*)tlistnode;

		printf("list :%d\n",tl->id);
	}



exit:
	//len = seqlist_clear(list);

	printf("len = :%d\n", seqlist_length(list));

	seqlist_destroy(list);

	system("pause");

	printf("seqlist test end.\n");
}
