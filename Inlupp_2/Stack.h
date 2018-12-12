#pragma once
#include <iostream>
#include <vector>
template<class T>
class Stack
{
public:
	void AddToStack(T data)
	{
		StackList.push_back(data);
	}
	T GetFromStack()
	{
		int size = SizeOfStackList();
		size--;
		int returnElement = StackList[size];
		StackList.pop_back();
		return returnElement;
		
	}
	T SizeOfStackList()
	{
		return StackList.size();
	}
private:
	std::vector<T> StackList;
};