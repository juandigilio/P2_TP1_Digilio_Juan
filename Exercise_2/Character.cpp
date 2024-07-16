#include "Character.h"

#include <iostream>

Character::Character()
{
    this->color = color;
}

Character::~Character()
{

}

void Character::Draw() 
{
    if (IsActive()) 
    {
        ConsoleManager::SetCursor(position, color);
        std::cout << " ";
    }
}
