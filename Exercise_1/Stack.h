#pragma once

#include "List.h"

template <typename T>
class Stack 
{
private:
    List<T>* list;

public:
    Stack();

    ~Stack();

    void Push(T data);

    T Pop();

    int GetCount();

    bool IsEmpty();
};

#include "Stack.tpp"