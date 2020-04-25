#include <stdio.h>
#include "addNode.h"

list_t* head = NULL;
list_t* last = NULL;

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
  if (NULL == headNode)
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

void deleteNodeAfterGivenNode(uint8_t key)
{
  list_t* headNode = head;
  list_t* temp = headNode;
  if (NULL == headNode)
  {
    return;
  }
  
  while (NULL != headNode->next)
  {
    temp = headNode->next;
    if (key == headNode->val)
    {
      headNode->next = temp->next;
      free(temp);
      break;
    }
    else
    {
      headNode = headNode->next;
    }
  }
}