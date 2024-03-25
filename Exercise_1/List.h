#pragma once

#include "Node.h"

#include <iostream>

using namespace std;

template <typename T>

class List 
{
private:
    Node<T>* first;
    int count;

    Node<T>* GetPenultimate();

    Node<T>* GetUltimate();

public:
    List();

    ~List();

    void PushFront(T data);

    void PushBack(T data);

    T PopFront();

    T PopBack();

    T GetData(int pos);

    void Insert(T data, int pos);

    void Clear() ;

    int GetCount();
};
