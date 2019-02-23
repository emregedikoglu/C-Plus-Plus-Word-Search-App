#ifndef _LINKEDLIST_
#define _LINKEDLIST_

#include "Node.h"

class LinkedList:public Node{
private:
	Node *head;
	int sz;
public:
	LinkedList();
	int size()const;
	bool isEmpty()const;
	bool isFull()const;
	bool search(string str);
};
#endif