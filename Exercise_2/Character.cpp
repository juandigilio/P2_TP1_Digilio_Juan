#include "Character.h"

#include <iostream>

Character::Character(char color) : color(color)
{

}

void Character::Draw() 
{
    if (IsActive()) 
    {
        std::cout << "Drawing " << color << " character at position (" << x << ", " << y << ")" << std::endl;
    }
}
