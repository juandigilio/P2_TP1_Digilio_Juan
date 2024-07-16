//#ifndef SPAWNER_TPP
//#define SPAWNER_TPP

#include "Spawner.h"
#include "Character.h"

#include <cstdlib>
#include <ctime>

template<class T, int N>
Spawner<T, N>::Spawner()
{
    totalEntities = N;

    pool = new T[totalEntities];

    for (int i = 0; i < totalEntities; i++)
    {
        Character character;
        pool[i] = character;
    }
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
    
    //character->SetPosition();
    //character->SetActive();

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