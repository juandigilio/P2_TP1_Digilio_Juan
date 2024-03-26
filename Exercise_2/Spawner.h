#pragma once

#include <vector>

template<class T, int N>
class Spawner 
{
private:

    std::vector<T> pool;
    int currentIndex;

public:

    Spawner();
    void Spawn();
    void DrawAll();
};


