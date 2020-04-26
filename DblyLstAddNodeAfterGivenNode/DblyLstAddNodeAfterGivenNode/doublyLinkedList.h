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

void addNodeFrontDoublyList(uint8_t newVal);

void printDblyList(dblyList_t* headNode);

void addNodeAfter(uint8_t givenNode, uint8_t newVal);

void printDblyListRev(dblyList_t* tailNode);

#ifdef __cplusplus
}
#endif

