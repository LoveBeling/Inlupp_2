#include "Queue.h"
#include "DoubleLinkedList.h"
#include "Stack.h"
#include "LinkedList.h"


void main()
{
	LinkedList<int> *dll = new LinkedList<int>;
	dll->InsertAtIndex(1, 0);
	dll->InsertAtIndex(2, 0);
	dll->InsertAtIndex(3, 0);
	dll->InsertAtIndex(4, 2);
	int lastIndex = dll->Getdata(3);
}

//2,3,4,5