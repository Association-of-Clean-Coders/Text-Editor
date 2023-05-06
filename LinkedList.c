#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
void bubbleSort(List *l) {
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
void sortAccordingToCharLength(List *l)
{
    bubbleSort(l)
}
