#include <stdlib.h>
#include "seqlist.h"
#include <stdio.h>

SeqList * seqlist_create(int capacity)
{
	_tagSeqlist* list = NULL;	
	list = (_tagSeqlist *)malloc(sizeof(_tagSeqlist)+capacity*sizeof(SeqlistNode *));
	if(list == NULL)
	{
		printf("Seqlist malloc failed!\n");
		return  NULL;
	}
	list->length = 0 ;
	list->capacity = capacity;
	return list;
}
void seqlist_destroy(SeqList *list)
{	
	if(list == NULL)
	{
		return;
	}
	free(list);
	list = NULL;
	return;
}
int seqlist_clear(SeqList *list)
{

	_tagSeqlist *seqlist = (_tagSeqlist*)list;
	if(list == NULL)
	{
		printf("seqlist_clear error!\n");
		return -1;
	}

	seqlist->length = 0;

	return 0;
}
int seqlist_length(SeqList *list)
{
	_tagSeqlist *seqlist = (_tagSeqlist*)list;
	if(list == NULL)
	{
		printf("seqlist_clear error!\n");
		return -1;
	}

	//
	return seqlist->length;
}


int seqlist_insert(SeqList *list, SeqlistNode *node, int pos)
{
	int i = 0;
	_tagSeqlist *seqlist  = (_tagSeqlist *)list;
	SeqlistNode *seqlistnode = (SeqlistNode *)node;
	unsigned int *tnode = (unsigned int *)(seqlist+1);

	if(list == NULL || node == NULL || pos <0)
	{
		printf("list == NULL or node = NULL\n");
		return -1;
	}

	if(seqlist->length > seqlist->capacity)
	{
		printf("list is full,cant insert\n");
		return -1;
	}

	if(pos >= seqlist->length)
	{
		pos = seqlist->length;
	}

	for(i = seqlist->length; i > pos; i--)
	{
		(tnode[i]) = (tnode[i-1]);
	}
	(tnode)[pos] = (unsigned int)node;

	seqlist->length ++;
	return 0;
}
int seqlist_delet(SeqList *list, int pos)
{
	int i = 0 ;
	_tagSeqlist *seqlist = (_tagSeqlist *)list;
	unsigned int *tnode = (unsigned int *)(seqlist+1);
	if(list == NULL)
	{
		printf("seqlist_delet error\n");
	}

	for(i = pos; i<seqlist->capacity-1; i++)
	{
		tnode[i] = tnode[i+1];
	}

	seqlist->length--;

	return 0;
}
SeqlistNode *seqlist_getnode(SeqList *list, int pos)
{
	_tagSeqlist *seqlist = (_tagSeqlist*)list;
	unsigned int *tnode = (unsigned int *)(seqlist+1);

	if(list == NULL)
	{
		printf("seqlist_getnode error\n");
	}

	return (SeqList*)tnode[pos];
}



