#pragma once
#include <iostream>

class Queue
{
public:
	void EnQueue(int data);
	void DeQueue();
	int GetFront();
private:
	struct Node {
		int data;
		struct Node *next;
	};
	struct Node *front = NULL;
	struct Node *rear = NULL;
	struct Node *NewNode = NULL;
	
};