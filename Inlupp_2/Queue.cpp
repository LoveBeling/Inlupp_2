#include "Queue.h"


void Queue::EnQueue(int data)
{
	if (rear == NULL)
	{
		rear = (struct Node*)malloc(sizeof(struct Node));
		rear->data = data;
		rear->next = NULL;
		front = rear;
	}
	else
	{
 		NewNode = (struct Node*)malloc(sizeof(struct Node));
		NewNode->data = data;
		NewNode->next = rear;
		rear = NewNode;
	}
}
void Queue::DeQueue()
{
	struct Node *current = rear;
	while (current->next->next != NULL)
	{
		current = current->next;
	}
	free(front);
	front = current;
	current->next = NULL;
	
}
int Queue::GetFront()
{
	return front->data;
}
