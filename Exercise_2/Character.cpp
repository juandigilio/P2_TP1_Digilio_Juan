#include "Character.h"

#include <iostream>

Character::Character(Color& color)
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
        ConsoleManager::SetCursor(position);
    }
}
