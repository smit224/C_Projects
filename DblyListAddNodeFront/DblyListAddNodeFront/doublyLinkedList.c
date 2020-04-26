#include <stdio.h>
#include "doublyLinkedList.h"

dblyList_t *head = NULL;
dblyList_t *tail = NULL;

void addNodeFrontDoublyList(uint8_t newVal)
{
  dblyList_t* newNode = (dblyList_t*)malloc(sizeof(dblyList_t));
  newNode->val = newVal;
  if ((head == NULL) && (tail == NULL))
  {
    newNode->next = NULL;
    newNode->prev = NULL;
    head = newNode;
    tail = newNode;
  }
  else
  {
    newNode->next = head;
    head->prev = newNode;
    newNode->prev = NULL;
    head = newNode;
  }
}

void printDblyList(dblyList_t* headNode)
{

  if (NULL == headNode)
  {
    return;
  }
  
  while (headNode != NULL)
  {
    printf("\n\r Node Val :: %d", headNode->val);
    headNode = headNode->next;
  }
}