#include "Utils.h"
#include "Stack.h"

#include<iostream>

void reverse(int *nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);

	for (unsigned int i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}

	unsigned int i = 0;
	while (!isEmpty(s))
	{
		nums[i++] = pop(s);
	}

	cleanStack(s);
	delete s;
}

int* reverse10()
{
	int* arr = new int[10];
	int input;

	for (int i = 9; i >= 0; i--)
	{
		std::cout << "Enter a number: ";
		std::cin >> input;
		arr[i]=input;
		
	}
	
	return arr;
}