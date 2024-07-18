#include "LinkedList.h"

void initList(linkedList* list)
{
	list->head = nullptr;
}

void add(linkedList* list , unsigned int newValue)
{
	link* newLink = new link;
	newLink->value = newValue;
	newLink->next = list->head;
	list->head = newLink;
}

int removeHead(linkedList* list)
{
	if(!list->head)
	{
		return -1;
	}
	else
	{
		int ans = list->head->value;
		link* linkToRemove = list->head;
		list->head = list->head->next;
		delete linkToRemove;
		return ans;
 	}
}

void deleteLink(link* l)
{
	if(l->next)
	{
		deleteLink(l->next);
	}
	delete l;
}

void cleanList(linkedList* list)
{
	if (list->head)
	{
		deleteLink(list->head);
	}
}