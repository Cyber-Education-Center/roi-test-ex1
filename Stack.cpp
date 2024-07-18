#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	add(s->_elements, element);
	s->_count++;
}

int pop(Stack* s)
{
	if(!isEmpty(s))
	{
		s->_count--;
		return removeHead(s->_elements);
	}
	else
	{
		return -1;
	}
}

void initStack(Stack* s)
{
	s->_count = 0;
	s->_elements = new linkedList;
	initList(s->_elements);
}


void cleanStack(Stack *s)
{
	cleanList(s->_elements);
	delete s->_elements;
	s->_count = 0;
}

bool isEmpty(Stack *s)
{
	return s->_count == 0;
}

bool isFull(Stack* s)
{
	// can never be full. because it is base on linked list
	return false;
}
