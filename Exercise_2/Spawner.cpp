#include "Spawner.h"
#include <cstdlib>
#include <ctime>

template<class T, int N>
Spawner<T, N>::Spawner() : currentIndex(0) 
{
    pool.reserve(N);
}

template<class T, int N>
void Spawner<T, N>::Spawn()
{
    if (pool.size() < N) 
    {
        pool.push_back(T());
    }
    else 
    {
        pool[currentIndex].setActive(false);
        currentIndex = (currentIndex + 1) % N;
    }

    int randomX = rand() % 100;
    int randomY = rand() % 100;

    pool.back().setPosition(randomX, randomY);
    pool.back().setActive(true);
}

template<class T, int N>
void Spawner<T, N>::DrawAll() 
{
    for (const auto& entity : pool) {
        entity.draw();
    }
}