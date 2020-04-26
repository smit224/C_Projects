#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct doublyList {

uint8_t val;
struct doublyList* next;
struct doublyList* prev;
};

typedef struct doublyList dblyList_t;

void addNodeDoublyList(uint8_t newVal);

void printDblyList(dblyList_t* headNode);

void printDblyListRev(dblyList_t* tailNode);

void deleteNode(uint8_t key);

#ifdef __cplusplus
}
#endif

