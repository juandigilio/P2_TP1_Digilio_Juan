#include "List.h"
#include "Queue.h"
#include "Stack.h"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

float GetRandomFloat();

template <typename T>
void FillDerived(T& listToFill, int& size);

void FillList();
void ShowList(List<float> listToShow);


int stackSize;
int queueSize;

Stack<float> stack;
Queue<float> queue;
List<float> list;

int main()
{
	srand(time(nullptr));

	FillDerived(stack, stackSize);
	FillDerived(queue, queueSize);

	FillList();

	ShowList(list);

	cin.get();
	cin.get();

	return 0;
}


float GetRandomFloat()
{
	return (rand() % 600 + 500) / 100.0f;
}

template <typename T>
void Enlist(T& listToFill, float data)
{
	if constexpr (is_same_v<T, Stack<float>>) 
	{
		listToFill.Push(data);
	}
	else if constexpr (is_same_v<T, Queue<float>>)
	{
		listToFill.Enqueue(data);
	}
}

template <typename T>
float Unlist(T& secondList)
{
	if constexpr (is_same_v<T, Stack<float>>)
	{
		return secondList.Pop();
	}
	else if constexpr (is_same_v<T, Queue<float>>)
	{
		return secondList.Dequeue();
	}
}

template <typename T>
void FillDerived(T& listToFill, int& size)
{
	size = (rand() % 6) + 5;

	float randInt;

	for (int i = 0; i < size; i++)
	{
		randInt = GetRandomFloat();

		Enlist(listToFill, randInt);
		
		cout << fixed << setprecision(2);

		cout << randInt << endl;
	}

	cout << endl << endl << endl;
}

void FillList()
{
	float data;

	for (int i = 0; i < stackSize + queueSize; i++)
	{
		if (i < stackSize)
		{
			data = Unlist(stack);
		}
		else
		{
			data = Unlist(queue);
		}

		if (i == 0)
		{
			list.PushFront(data);
		}
		else
		{
			for (int j = 0; j < i; j++)
			{
				float listContent = list.GetData(j);

				if (data > listContent)
				{
					list.Insert(data, j);
					break;
				}
				else if (j == i - 1)
				{
					list.PushBack(data);
					break;
				}
			}
		}
	}
}

void ShowList(List<float> listToShow)
{
	int count = listToShow.GetCount();

	for (int i = 0; i < count; i++)
	{
		cout << fixed << setprecision(2);

		cout << listToShow.PopFront() << endl;
	}
}