#include "pch.h"
#include "../Inlupp_2/Queue.h"
#include "../Inlupp_2/Stack.h"
#include"../Inlupp_2/DoubleLinkedList.h"
#include "../Inlupp_2/LinkedList.h"

TEST(QueueTest, CorrectIsFront) {
	int front;
	Queue<int> *que = new Queue<int>;
	for (int i = 0; i < 5; i++)
	{
		que->EnQueue(i);
	}
	front = que->GetFront();
  EXPECT_EQ(0, front);
}
TEST(QueueTest, CorrectIsFrontWhenDeQueue)
{
	int front;
	Queue<int> *que = new Queue<int>;
	for (int i = 0; i < 5; i++)
	{
		que->EnQueue(i);
	}
	que->DeQueue();
	front = que->GetFront();
	EXPECT_EQ(1, front);
}
TEST(StackTest, IfAddToStackWorksCorrectly)
{
	Stack<int> *stack = new Stack<int>;
	stack->AddToStack(1);
	stack->AddToStack(2);
	stack->AddToStack(3);
	int size = stack->SizeOfStackList();
	EXPECT_EQ(3, size);
}
TEST(StackTest, IfGetFromStackRemovesAndReturnsCorrectly)
{
	Stack<int> *stack = new Stack<int>;
	stack->AddToStack(1);
	stack->AddToStack(2);
	stack->AddToStack(3);
	int data = stack->GetFromStack();
	int size = stack->SizeOfStackList();
	EXPECT_EQ(3, data);
	EXPECT_EQ(2, size);
}
TEST(DoubleLinkedListTest, InsertAtBeginning)
{
	DoubleLinkedList<int> *dll = new DoubleLinkedList<int>;
	dll->InsertAtIndex(1, 0);
	dll->InsertAtIndex(2, 0);
	dll->InsertAtIndex(3, 0);
	dll->InsertAtIndex(4, 0);
	int Indexzero = dll->Getdata(0);
	EXPECT_EQ(4, Indexzero);
}
TEST(DoubleLinkedListTest, InsertLast)
{
	DoubleLinkedList<int> *dll = new DoubleLinkedList<int>;
	dll->InsertAtIndex(1, 0);
	dll->InsertAtIndex(2, 0);
	dll->InsertAtIndex(3, 0);
	dll->InsertAtIndex(4, 2);
	int lastIndex = dll->Getdata(3);
	EXPECT_EQ(1, lastIndex);
}
TEST(DoubleLinkedListTest, InsertInMiddle)
{
	DoubleLinkedList<int> *dll = new DoubleLinkedList<int>;
	dll->InsertAtIndex(1, 0);
	dll->InsertAtIndex(2, 0);
	dll->InsertAtIndex(3, 0);
	dll->InsertAtIndex(4, 0);
	dll->InsertAtIndex(5, 0);
	dll->InsertAtIndex(34, 2);
	int indexTwo = dll->Getdata(2);
	EXPECT_EQ(34, indexTwo);
}
TEST(DoubleLinkedListTest, RemoveFromBeginningAndCheckSize)
{
	DoubleLinkedList<int> *dll = new DoubleLinkedList<int>;
	dll->InsertAtIndex(1, 0);
	dll->InsertAtIndex(2, 0);
	dll->InsertAtIndex(3, 0);
	dll->InsertAtIndex(4, 0);
	dll->RemoveAtIndex(0);
	int indexZero = dll->Getdata(0);
	int size = dll->Size();
	EXPECT_EQ(3, indexZero);
	EXPECT_EQ(3, size);
}
TEST(DoubleLinkedListTest, RemoveLastIndex)
{
	DoubleLinkedList<int> *dll = new DoubleLinkedList<int>;
	dll->InsertAtIndex(1, 0);
	dll->InsertAtIndex(2, 0);
	dll->InsertAtIndex(3, 0);
	dll->InsertAtIndex(4, 0);
	dll->InsertAtIndex(5, 0);
	dll->RemoveAtIndex(4);
	dll->Getdata(4);
	int size = dll->Size();
	
	EXPECT_EQ(4, size);
}
TEST(DoubleLinkedListTest, RemoveFromMiddle)
{
	DoubleLinkedList<int> *dll = new DoubleLinkedList<int>;
	dll->InsertAtIndex(1, 0);
	dll->InsertAtIndex(2, 0);
	dll->InsertAtIndex(3, 0);
	dll->InsertAtIndex(4, 0);
	dll->InsertAtIndex(5, 0);
	dll->RemoveAtIndex(2);
	int indexOne = dll->Getdata(1);
	int indexTwo = dll->Getdata(2);
	EXPECT_EQ(4, indexOne);
	EXPECT_EQ(2, indexTwo);
}
TEST(LinkedListTest, InsertAtBeginning)
{
	LinkedList<int> *ll = new LinkedList<int>;
	ll->InsertAtIndex(1, 0);
	ll->InsertAtIndex(2, 0);
	ll->InsertAtIndex(3, 0);
	ll->InsertAtIndex(4, 0);
	int Indexzero = ll->Getdata(0);
	EXPECT_EQ(4, Indexzero);
}
TEST(LinkedListTest, InsertLast)
{
	LinkedList<int> *ll = new LinkedList<int>;
	ll->InsertAtIndex(1, 0);
	ll->InsertAtIndex(2, 0);
	ll->InsertAtIndex(3, 0);
	ll->InsertAtIndex(4, 2);
	int lastIndex = ll->Getdata(3);
	EXPECT_EQ(1, lastIndex);
}
TEST(LinkedListTest, InsertInMiddle)
{
	LinkedList<int> *ll = new LinkedList<int>;
	ll->InsertAtIndex(1, 0);
	ll->InsertAtIndex(2, 0);
	ll->InsertAtIndex(3, 0);
	ll->InsertAtIndex(4, 0);
	ll->InsertAtIndex(5, 0);
	ll->InsertAtIndex(34, 2);
	int indexTwo = ll->Getdata(2);
	EXPECT_EQ(34, indexTwo);
}
TEST(LinkedListTest, RemoveFromBeginningAndCheckSize)
{
	LinkedList<int> *ll = new LinkedList<int>;
	ll->InsertAtIndex(1, 0);
	ll->InsertAtIndex(2, 0);
	ll->InsertAtIndex(3, 0);
	ll->InsertAtIndex(4, 0);
	ll->RemoveAtIndex(0);
	int indexZero = ll->Getdata(0);
	int size = ll->Size();
	EXPECT_EQ(3, indexZero);
	EXPECT_EQ(3, size);
}
TEST(LinkedListTest, RemoveLastIndex)
{
	LinkedList<int> *ll = new LinkedList<int>;
	ll->InsertAtIndex(1, 0);
	ll->InsertAtIndex(2, 0);
	ll->InsertAtIndex(3, 0);
	ll->InsertAtIndex(4, 0);
	ll->InsertAtIndex(5, 0);
	ll->RemoveAtIndex(4);
	ll->Getdata(4);
	int size = ll->Size();

	EXPECT_EQ(4, size);
}
TEST(LinkedListTest, RemoveFromMiddle)
{
	LinkedList<int> *ll = new LinkedList<int>;
	ll->InsertAtIndex(1, 0);
	ll->InsertAtIndex(2, 0);
	ll->InsertAtIndex(3, 0);
	ll->InsertAtIndex(4, 0);
	ll->InsertAtIndex(5, 0);
	ll->RemoveAtIndex(2);
	int indexOne = ll->Getdata(1);
	int indexTwo = ll->Getdata(2);
	EXPECT_EQ(4, indexOne);
	EXPECT_EQ(2, indexTwo);
}

