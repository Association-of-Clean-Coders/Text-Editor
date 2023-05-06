#include "LinkedList.h"
#include <stdlib.h>
public createList(List *l){
    l->head=NULL;
    l->size=0;
}
int size(List *l){
    return l->size;
}
int isEmpty(List *l){
    return (l->head==NULL);
}
int isFull(List *l){
    return 0;
}
void insert(int pos,Entry e,List *l){
    ListNode *p,*q;
    p=(ListNode *)malloc(sizeof(ListNode));
    p->entry=e;
    p->next=NULL;
    p->before=NULL;
    if (pos==0){
        p->next=pl->head;
        l->head=p;
   }
   else{
        for(q=l->head, i=0; i<pos-1; i++)
            q=q->next;
        p->next=q->next;
        p->before=q->before;
        q->next=p;
   }
   pl->size++;
}
void displayItems(int[] pos,List *l){
    int count=0;
    ListNode *p=l->head;
	while(p){
        if (count == pos[count]) {
            printf()
            p=p->next;
        }
	}
}
void replace(int pos,Entry e,List *l){
    ListNode *q;
    if (pos==0){
        p->next=pl->head;
        l->head->entry=e;
   }
   else{
        for(q=l->head, i=0; i<pos-1; i++)
            q=q->next;
        q->entry=e;
   }
}
