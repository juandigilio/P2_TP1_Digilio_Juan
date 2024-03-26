#include "Spawner.h"
#include "Character.h"
#include "ConsoleManager.h"

#include <iostream>


const int maxEntitiesQnty = 10;

int main() 
{
    srand(time(nullptr));

    ConsoleManager console(25, 15);

    Spawner<Character*, maxEntitiesQnty> spawner;

    char input;

    while (true) 
    {
        std::cin >> input;

        switch (input) 
        {
        case 'R':
            spawner.Spawn(Color::RED);
            break;
        case 'G':
            spawner.Spawn(Color::GREEN);
            break;
        case 'B':
            spawner.Spawn(Color::BLUE);
            break;
        case 'D':
            spawner.DeleteRandom();
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            break;
        }
    }

    return 0;
}