#include <stdio.h>
#include "doublyLinkedList.h"

#ifdef __cplusplus
extern "C"
{
#endif

extern dblyList_t *head;
extern dblyList_t *tail;

#ifdef __cplusplus
}
#endif


int main(void)
{
  addNodeDoublyList(5);
  addNodeDoublyList(4);
  addNodeDoublyList(3);

  printDblyList(head);
  printf("\n\r ***************************");

  return 0;
}