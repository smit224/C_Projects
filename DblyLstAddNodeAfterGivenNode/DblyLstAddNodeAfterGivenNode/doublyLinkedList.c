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

void addNodeAfter(uint8_t givenNode, uint8_t newVal)
{
  dblyList_t* headNode = head;
  dblyList_t* newNode = (dblyList_t*)malloc(sizeof(dblyList_t));
  newNode->val = newVal;
  dblyList_t* tempNode;
  if ((head == NULL) && (tail == NULL))
  {
    return;
  }
  
  while (headNode != NULL)
  {
    if (headNode->val == givenNode)
    {
      if (headNode->next != NULL)
      {
        tempNode = headNode->next;
        tempNode->prev = newNode;
        newNode->next = tempNode;
      }
      else
      {
        newNode->next = NULL;
        tail = newNode;
      }
      headNode->next = newNode;
      newNode->prev = headNode;
      break;
    }
    else
    {
      headNode = headNode->next;
    }
  }
}

void printDblyListRev(dblyList_t* tailNode)
{
  if (NULL == tailNode)
  {
    return;
  }

  while (tailNode != NULL)
  {
    printf("\n\r Node Val :: %d", tailNode->val);
    tailNode = tailNode->prev;
  }
}