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

#ifdef __cplusplus
}
#endif

