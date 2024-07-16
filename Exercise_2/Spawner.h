#pragma once

#include "ConsoleManager.h"

#include <vector>

template<class T, int N>
class Spawner 
{
private:

    //std::vector<T> pool;
    T* pool[];
    int totalEntities;

public:

    Spawner();
    virtual ~Spawner();

    void Spawn(Color color);
    void DeleteRandom();
    void DrawAll();
};

//#include "Spawner.tpp"
