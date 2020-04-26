#include <stdio.h>
#include "doublyLinkedList.h"

dblyList_t *head = NULL;
dblyList_t *tail = NULL;

void addNodeDoublyList(uint8_t newVal)
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
    newNode->next = NULL;
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

void deleteNode(uint8_t key)
{
  dblyList_t* headNode = head;
  dblyList_t* tempNode = NULL;
  if ((head == NULL) && (tail == NULL))
  {
    return;
  }
  
  if (headNode->val == key)
  {
    tempNode = headNode;
    headNode = headNode->next;
    headNode->prev = NULL;
    head = headNode;
    free(tempNode);
    tempNode = NULL;
    return;
  }
  
  while ((headNode != NULL) && (headNode->next != NULL))
  {
    tempNode = headNode->next;
    if (tempNode->val == key)
    {
      if (NULL == tempNode->next)
      {
        headNode->next = NULL;
        tail = headNode;
        free(tempNode);
        tempNode = NULL;
      }
      else
      {
        headNode->next = tempNode->next;
        tempNode->next->prev = headNode;
        free(tempNode);
        tempNode = NULL;
      }
      break;
    }
    else
    {
      headNode = headNode->next;
    }
  }
}