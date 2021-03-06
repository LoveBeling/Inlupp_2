#pragma once
#include <iostream>
template<class T>
class DoubleLinkedList
{
public:
	void InsertAtIndex(T data, int Index)
	{
		int lastIndex = Size();
		lastIndex--;
		struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
		if (head == nullptr)
		{
			NewNode->data = data;
			NewNode->index = 0;
			NewNode->next = nullptr;
			NewNode->prev = nullptr;
			head = NewNode;
			return;
		}
		else if (Index == 0)
		{
			NewNode->index = 0;
			NewNode->data = data;
			head->index = 1;
			NewNode->next = head;
			head->prev = NewNode;
			NewNode->prev = nullptr;
			head = NewNode;
			ResetIndex();
			return;
		}
		else if (Index == lastIndex)
		{
			struct Node *current = head;
			while (current != nullptr)
			{
				if (current->index == Index)
				{
					NewNode->data = data;
					NewNode->next = current;
					NewNode->prev = current->prev;
					current->prev->next = NewNode;
					current->next = nullptr;
					break;
				}
				current = current->next;
			}
		}
		else
		{
			struct Node *current = head;
			while (current != nullptr)
			{
				if (current->index == Index)
				{
					NewNode->data = data;
					NewNode->index = Index;
					NewNode->next = current;
					NewNode->prev = current->prev;
					current->prev->next = NewNode;
					break;
				}
				current = current->next;
			}

		}
		ResetIndex();
	}
	void RemoveAtIndex(int Index)
	{
		int lastIndex = Size();
		lastIndex--;
		if (Index == 0)
		{
			struct Node *nexthead = head->next;
			head->next->prev = nullptr;
			free(head);
			head = nexthead;
			ResetIndex();
			return;
		}
		else if(lastIndex == Index)
		{
			struct Node *current = head;
			while (current != nullptr)
			{
				if (current->index == Index)
				{
					current->prev->next = nullptr;
					free(current);
					break;
				}
				current = current->next;
			}
		}
		else
		{
			struct Node *current = head;
			while (current != nullptr)
			{
				if (current->index == Index)
				{
					current->next->prev = current->prev;
					current->prev->next = current->next;
					free(current);
					ResetIndex();
					break;
				}
				current = current->next;
			}
		}

	}
	T Getdata(int Index)
	{
		struct Node *current = head;
		int size = Size();
		size = size - 1;
		for (int i = 0; i <= size; i++)
		{
			if (current->index == Index)
			{
				return current->data;
			}
			current = current->next;
		}
 	}
	int Size()
	{
		struct Node *current = head;
		int count = 0;
		while (current != nullptr)
		{
			count++;
			current = current->next;
		}
		return count;
	}
	void ResetIndex()
	{
		int size = Size();
		size = size - 1;
		struct Node *current = head;
		for (int i = 0; i < Size(); i++)
		{
			current->index = i;
			current = current->next;
		}


	}
private:
	struct Node {
		T data;
		int index;
		struct Node *next;
		struct Node *prev;
	};

	struct Node *head = nullptr;
};
