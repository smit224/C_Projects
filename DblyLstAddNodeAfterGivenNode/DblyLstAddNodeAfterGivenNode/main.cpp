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
  addNodeFrontDoublyList(5);
  addNodeFrontDoublyList(4);
  addNodeFrontDoublyList(3);

  printDblyList(head);
  printf("\n\r ***************************");
  printDblyListRev(tail);
  printf("\n\r ***************************");
  addNodeAfter(3, 6);
  addNodeAfter(5, 7);
  printDblyList(head);

  printf("\n\r ***************************");
  printDblyListRev(tail);

  return 0;
}