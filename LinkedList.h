#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include<string.h>

typedef char[1000] Entry;

typedef struct ListNode{
    ListNode *before;
    ListNode *After;
    Entry entry;
}ListNode;

typedef struct List{
    ListNode *head;
    int size;
}List;

//basic methods
void createList(List *l);
void insert(int pos,Entry e,List *l);
void removeLine(int pos,Entry *e,List *l);
void destroyList(List *l);
int size(List *l);
int isEmpty(List *l);
int isFull(List *l);
//.............
void displayItems(int[] pos,List *l);
int findCharLength(int pos,List *l);
void sortAccordingToCharLength(List *l);
void replace(int pos,List *l);
void bubbleSort(ListNode *l);
#endif // LINKEDLIST_H_INCLUDED
