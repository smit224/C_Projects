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
  addNodeDoublyList(2);
  addNodeDoublyList(1);

  printDblyList(head);
  printf("\n\r Rev Ord ***************************");

  printDblyListRev(tail);
  printf("\n\r ***************************");

  deleteNode(3);
  printDblyList(head);
  printf("\n\r ***************************");

  deleteNode(5);
  printDblyList(head);
  printf("\n\r ***************************");
  printDblyListRev(tail);

  printf("\n\r ***************************");
  deleteNode(1);
  printDblyList(head);
  printf("\n\r ***************************");
  printDblyListRev(tail);

  return 0;
}