#include "LinkedList.h"
#include <stdlib.h>
#include <string.h>

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

void removeLine(List *l, int lineNum, FILE* file) {
    ListNode current = *l;
    int count = 1;
    while (current != NULL) {
        if (count == lineNum) {
            if (current->before != NULL) {
                current->before->After = current->After;
            } else {
                *l = current->After;
            }
            if (current->After != NULL) {
                current->After->before = current->before;
            }
            fprintf(file, "Deleted line %d: %s", lineNum, current->data);
            free(current->data);
            free(current);
            return;
        }
        current = current->next;
        count++;
    }
    fprintf(file, "Line %d does not exist.\n", lineNum);
}
void destroyList(List *l, FILE* file) {
    ListNode current = *l;
    while (current != NULL) {
        fprintf(file, "Deleted line: %s", current->data);
        ListNode temp = current;
        current = current->After;
        free(temp->data);
        free(temp);
    }
    *l = NULL;
    fprintf(file, "All lines have been deleted.\n");
}
int findCharLength(int pos,List *l)
{
    ListNode current = head;
    int count = 0;
    while (current != NULL) {
        count++;
        if (count == lineNum) {
            return strlen(current->data) - 1;
        }
        current = current->next;
    }
    return -1;
}
void bubbleSortAccordingToCharLength(List *l) {
    int swapped, i;
    ListNode *current;
    ListNode *last = NULL;
    if (*l == NULL) {
        return;
    }
    do {
        swapped = 0;
        current = *l;
        while (current->After != last) {
            if (strlen(current->data) > strlen(current->After->data)) {
                swap(current, current->After);
                swapped = 1;
            }
            current = current->After;
        }
        last = current;
    } while (swapped);
}

