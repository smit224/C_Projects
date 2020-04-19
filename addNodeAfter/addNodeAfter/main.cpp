#include <stdio.h>
#include "addNode.h"

#ifdef __cplusplus
extern "C"
{
#endif
  extern list_t* head;
  extern list_t* last;
#ifdef __cplusplus
}
#endif

int main(void)
{
  addNodeInList(1);
  addNodeInList(2);
  addNodeInList(5);
  printList(head);
  addNodeAfter(2, 3);
  addNodeAfter(3, 4);
  printList(head);
  return 0;
}
