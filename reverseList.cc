#include "List.h"
void reverseList(tList *previous)
{
	tList *head = previous;
	tList *current;
	while(previous)
	{
	current = previous->next;
	if(!current)
	break;
	current ->next = previous;
	previous =current;
}
head->next=0;
}
