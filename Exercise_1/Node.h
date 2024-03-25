#pragma once

template <typename T>
class Node
{
private:
    T data;
    Node* next;

public:
    Node(T data);

    T GetData();

    Node<T>* GetNext();

    void SetNext(Node* next);
};

#include "Node.tpp"