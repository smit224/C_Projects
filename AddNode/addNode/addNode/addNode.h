#pragma once
#include <stdint.h>

struct myList_t {

  uint8_t val;
  struct myList_t* next;
};

typedef struct myList_t list_t;

void addNodeInList(uint8_t newVal);
