#pragma once

#include "Entity.h"
#include "Spawnable.h"
#include "ConsoleManager.h"

class Character : public Entity, public Spawnable 
{
private:

    Color color;

public:

    Character();
    ~Character();

    void Draw() override;
};