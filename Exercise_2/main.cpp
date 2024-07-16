#include "Spawner.h"
#include "Character.h"
#include "ConsoleManager.h"

#include <iostream>
#include <conio.h>


const int maxEntitiesQnty = 10;

using namespace std;

int main() 
{
    srand(time(nullptr));

    ConsoleManager console(50, 25);

    Spawner<Character*, maxEntitiesQnty> spawner;

    char input;

    while (true) 
    {
        input = _getch();

        switch (toupper(input))
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