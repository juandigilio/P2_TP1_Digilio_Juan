#ifndef LIST_TPP
#define LIST_TPP

#include "List.h"


template <typename T>
Node<T>* List<T>::GetPenultimate()
{
    if (!first || !first->GetNext())
    {
        return nullptr;
    }

    Node<T>* current = first;

    while (current->GetNext()->GetNext())
    {
        current = current->GetNext();
    }

    return current;
}

template <typename T>
Node<T>* List<T>::GetUltimate()
{
    if (!first)
    {
        return nullptr;
    }

    Node<T>* current = first;

    while (current->GetNext())
    {
        current = current->GetNext();
    }

    return current;
}

template <typename T>
List<T>::List() : first(nullptr), count(0) {}

template <typename T>
List<T>::~List()
{
    Clear();
}

template <typename T>
void List<T>::PushFront(T data)
{
    Node<T>* newNode = new Node<T>(data);

    newNode->SetNext(first);

    first = newNode;

    count++;
}

template <typename T>
void List<T>::PushBack(T data)
{
    Node<T>* newNode = new Node<T>(data);

    if (!first)
    {
        first = newNode;
    }
    else
    {
        GetUltimate()->SetNext(newNode);
    }

    count++;
}

template <typename T>
T List<T>::PopFront()
{
    if (!first)
    {
        throw std::out_of_range("List is empty");
    }

    T data = first->GetData();

    Node<T>* temp = first;

    first = first->GetNext();

    delete temp;

    count--;

    return data;
}

template <typename T>
T List<T>::PopBack()
{
    if (!first)
    {
        throw out_of_range("List is empty");
    }

    T data;

    Node<T>* penultimate = GetPenultimate();

    if (!penultimate)
    {
        data = first->GetData();
        delete first;
        first = nullptr;
    }
    else
    {
        data = penultimate->GetNext()->GetData();
        delete penultimate->GetNext();
        penultimate->SetNext(nullptr);
    }

    count--;

    return data;
}

template <typename T>
T List<T>::GetData(int pos)
{
    if (!first)
    {
        throw out_of_range("List is empty");
    }
    else if (pos > count - 1)
    {
        throw out_of_range("Out of range");
    }
    else
    {
        Node<T>* current = first;

        for (int i = 0; i < pos; i++)
        {
            current = current->GetNext();
        }

        return current->GetData();
    }
}

template <typename T>
void List<T>::Insert(T data, int pos)
{
    if (pos > count)
    {
        throw out_of_range("Position out of range");
    }
    else if (pos == 0)
    {
        PushFront(data);
    }
    else if (pos == -1 || pos == count)
    {
        PushBack(data);
    }
    else
    {
        Node<T>* newNode = new Node<T>(data);
        Node<T>* current = first;

        for (int i = 0; i < pos - 1; i++)
        {
            current = current->GetNext();
        }

        newNode->SetNext(current->GetNext());
        current->SetNext(newNode);

        count++;
    }  
}

template <typename T>
void List<T>::Clear()
{
    while (first)
    {
        Node<T>* temp = first;

        first = first->GetNext();

        delete temp;
    }

    count = 0;
}

template <typename T>
int List<T>::GetCount()
{
    return count;
}

#endif