#include <stdio.h>
#include <stdlib.h>
#include "revList.h"

my_list* head = NULL;

int main(void)
{
	head = add_node(5);
	head = add_node(4);
	head = add_node(3);
	head = add_node(2);
	head = add_node(1);
	print_my_list(head);
	my_list* new_head = rev_my_list(head);
	if (new_head != NULL)
	{
		printf("\n\r rev list");
		print_my_list(new_head);
	}
	return 0;
}

my_list* add_node(unsigned char newKey)
{
	if (NULL == head)
	{
		head = (my_list*)malloc(sizeof(my_list));
		head->key = newKey;
		head->next = NULL;
	}
	else
	{
		my_list* new_node = (my_list*)malloc(sizeof(my_list));
		new_node->key = newKey;
		new_node->next = head;
		head = new_node;
	}
	return head;
}

void print_my_list(my_list* headNode)
{
	while (NULL != headNode)
	{
		printf("\n\r Node Key : %d", headNode->key);
		headNode = headNode->next;
	}
}

my_list* rev_my_list(my_list* headNode)
{
	printf("\n\r in rev_my_list");
	if ((NULL == headNode) || (NULL == headNode->next))
	{
		printf("\n\r return NULL");
		return NULL;
	}

	my_list* tempNode = headNode->next;
	headNode->next = NULL;
	my_list* tempNode1;
	while (tempNode != NULL)
	{
		tempNode1 = tempNode->next;
		tempNode->next = headNode;
		headNode = tempNode;
		tempNode = tempNode1;
	}
	return headNode;
}