#pragma once

class Entity 
{
public:

    Entity() {}
    virtual ~Entity() {}
    virtual void Draw() = 0;
};