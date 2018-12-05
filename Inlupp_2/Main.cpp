#include "Queue.h"


void main()
{
	Queue<int> *que = new Queue<int>;
	que->EnQueue(30);
	que->EnQueue(40);
	que->EnQueue(50);
	que->EnQueue(60);
	int front = que->GetFront();
	que->DeQueue();
	int newfront = que->GetFront();
	que->DeQueue();
	int newnewfront = que->GetFront();
	que->DeQueue();
	int newnewnewfront = que->GetFront();
}