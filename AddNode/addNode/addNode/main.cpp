#include <stdio.h>
#include <stdlib.h>
#include "addNode.h"

void printList(list_t* headNode);

list_t* head = NULL;
list_t* last = NULL;

int main(void)
{
  addNodeInList(1);
  addNodeInList(2);
  addNodeInList(6);
  addNodeInList(5);
  printList(head);
}

void addNodeInList(uint8_t newVal)
{
  if ((NULL == head) && (NULL == last))
  {
    head = (list_t*)malloc(sizeof(list_t));
    head->val = newVal;
    head->next = NULL;
    last = head;
  }
  else
  {
    list_t* newNode = (list_t*)malloc(sizeof(list_t));
    newNode->val = newVal;
    newNode->next = NULL;
    last->next = newNode;
    last = newNode;
  }
}

void printList(list_t* headNode)
{
  if(NULL == headNode)
  {
    return;
  }
  else
  {
    while (NULL != headNode)
    {
      printf("\n\r node Val : %d", headNode->val);
      headNode = headNode->next;
    }
  }
}