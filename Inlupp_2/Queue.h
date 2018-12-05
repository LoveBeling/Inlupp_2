#pragma once
#include <iostream>
template<class T>
class Queue
{
public:
	void EnQueue(T data)
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
	void DeQueue() {
		struct Node *current = rear;
		while (current->next->next != NULL)
		{
			current = current->next;
		}
		free(front);
		front = current;
		current->next = NULL;

	}
	T GetFront() {
		return front->data;

	}
	
private:
	struct Node {
		T data;
		struct Node *next;
	};
	struct Node *front = NULL;
	struct Node *rear = NULL;
	struct Node *NewNode = NULL;
	
};