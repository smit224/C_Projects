#pragma once

struct my_list {
	
	unsigned char key;
	struct my_list* next;
};

my_list* add_node(unsigned char newKey);
void print_my_list(my_list* headNode);
my_list* rev_my_list(my_list* headNode);
