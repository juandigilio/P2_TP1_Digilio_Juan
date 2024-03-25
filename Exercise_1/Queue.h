#pragma once

#include "List.h"

template <typename T>
class Queue
{
private:
    List<T>* list;

public:
    Queue();

    ~Queue();
    void Enqueue(T data);

    T Dequeue();

    int GetCount();

    bool IsEmpty();
};

#include "Queue.tpp"
