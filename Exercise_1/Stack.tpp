#ifndef STACK_TPP
#define STACK_TPP

#include "Stack.h"


template <typename T>
Stack<T>::Stack()
{
    list = new List<T>();
}

template <typename T>
Stack<T>::~Stack()
{
    delete list;
}

template <typename T>
void Stack<T>::Push(T data)
{
    list->PushFront(data);
}

template <typename T>
T Stack<T>::Pop()
{
    return list->PopFront();
}

template <typename T>
int Stack<T>::GetCount()
{
    return list->GetCount();
}

template <typename T>
bool Stack<T>::IsEmpty()
{
    return list->GetCount() == 0;
}

#endif