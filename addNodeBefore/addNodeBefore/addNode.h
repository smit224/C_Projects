#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct myList_t {

  uint8_t val;
  struct myList_t* next;
};

typedef struct myList_t list_t;

void addNodeInList(uint8_t newVal);

void printList(list_t* headNode);

void addNodeBefore(uint8_t existingNodeVal, uint8_t newNodeVal);

#ifdef __cplusplus
}
#endif