#ifndef SPAWNER_TPP
#define SPAWNER_TPP

#include "Spawner.h"
#include "Character.h"

#include <cstdlib>
#include <ctime>

template<class T, int N>
Spawner<T, N>::Spawner()
{
    pool.reserve(N);
    totalEntities = 0;
}

template<class T, int N>
Spawner<T, N>::~Spawner()
{
    for (auto& entity : pool)
    {
        delete entity;
    }

    pool.clear();
}

template<class T, int N>
void Spawner<T, N>::Spawn(Color color)
{
    Character* character = new Character(color);
    character->SetPosition();

    pool.push_back(character);

    DrawAll();
}

template<class T, int N>
void Spawner<T, N>::DeleteRandom()
{
    int random = rand() % pool.size();

    pool.erase(pool.begin() + random);

    DrawAll();
}

template<class T, int N>
void Spawner<T, N>::DrawAll() 
{
    system("cls");

    for (auto& entity : pool) 
    {
        entity->Draw();
    }
}

#endif