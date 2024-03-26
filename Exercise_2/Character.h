#pragma once

#include "Entity.h"
#include "Spawnable.h"

class Character : public Entity, public Spawnable 
{
private:

    char color;

public:

    Character(char color);
    ~Character();

    void Draw() override;
};
