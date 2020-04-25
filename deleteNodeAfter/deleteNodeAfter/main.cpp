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
  addNodeInList(3);
  addNodeInList(4);
  addNodeInList(5);
  printList(head);

  deleteNodeAfterGivenNode(1);
  printf("\n\r *********************");
  printList(head);

  deleteNodeAfterGivenNode(5);
  printf("\n\r *********************");
  printList(head);

}