#include "pch.h"
#include "../Inlupp_2/Queue.h"


TEST(QueueTests, CorrectIsFront) {
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