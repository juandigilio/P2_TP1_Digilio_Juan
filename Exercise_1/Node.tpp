#ifndef NODE_TPP
#define NODE_TPP

#include "Node.h"

template <typename T>
Node<T>::Node(T data) : data(data), next(nullptr) {}

template <typename T>
T Node<T>::GetData()
{
    return data;
}

template <typename T>
Node<T>* Node<T>::GetNext()
{
    return next;
}

template <typename T>
void Node<T>::SetNext(Node* next)
{
    this->next = next;
}

#endif