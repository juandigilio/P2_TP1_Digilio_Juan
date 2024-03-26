#include "Spawnable.h"

Spawnable::Spawnable()
{
    active = false;
    x = 0;
    y = 0;
}

void Spawnable::SetPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Spawnable::SetActive(bool isActive)
{
    active = isActive;
}

bool Spawnable::IsActive()
{
    return active;
}