
#ifndef _SEQLIST_H_
#define _SEQLIST_H_

typedef void SeqList;
typedef void SeqlistNode;

typedef struct _tagSeqlist{
	int capacity;
	int length;
	SeqlistNode *node;
}_tagSeqlist;


SeqList * seqlist_create(int capacity);
void seqlist_destroy(SeqList *list);
int seqlist_clear(SeqList *list);
int seqlist_length(SeqList *list);


int seqlist_insert(SeqList *list, SeqlistNode* node ,int pos);
int seqlist_delet(SeqList *list, int pos);
SeqlistNode *seqlist_getnode(SeqList *list, int pos);

#endif