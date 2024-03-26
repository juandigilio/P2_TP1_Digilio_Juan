#include "Spawner.h"
#include "Character.h"

#include <iostream>


int main() 
{
    srand(time(nullptr));

    Spawner<Character, 10> spawner;

    while (true) 
    {
        std::cin >> input;

        switch (input) 
        {
        case 'R':
            spawner.Spawn();
            break;
        case 'G':
            spawner.Spawn();
            break;
        case 'B':
            spawner.Spawn();
            break;
        case 'D':
            
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            break;
        }

        spawner.DrawAll();
    }

    return 0;
}