#include "List.h"
#include "Queue.h"
#include "Stack.h"

#include <iostream>

float GetRandomFloat();
void FillStack();
void FillQueue();

int stackSize = 0;
int queueSize = 0;

Stack<float> stack;
Queue<float> queue;
List<float> list;

void main()
{
	srand(time(nullptr));

	

	FillStack();
	FillQueue();
	
}


float GetRandomFloat()
{
	int intenger = (rand() % 6) + 5;
	int floatingPoint = rand() % 100;

	return intenger + static_cast<float>(floatingPoint) / 100;
}

void FillStack()
{
	int stackSize = (rand() % 6) + 5;

	for (int i = 0; i < stackSize; i++)
	{
		stack.Push(GetRandomFloat());
		stackSize++;
	}
}

void FillQueue()
{
	int queueSize = (rand() % 6) + 5;

	for (int i = 0; i < queueSize; i++)
	{
		queue.Enqueue(GetRandomFloat());
		queueSize++;
	}
}

void FillList()
{
	for (int i = 0; i < stackSize; i++)
	{
		if (i == 0)
		{
			list.PushFront(queue.Dequeue());
		}
		else
		{
			float data = queue.Dequeue();

			for (int j = 0; j < i; j++)
			{

			}
		}
	}
}