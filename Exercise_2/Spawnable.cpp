#include "Spawnable.h"

Spawnable::Spawnable()
{
    active = false;
    position.X = 0;
    position.Y = 0;
}

void Spawnable::SetPosition(int x, int y)
{
    position.X = x;
    position.Y = y;
}

void Spawnable::SetActive(bool isActive)
{
    active = isActive;
}

bool Spawnable::IsActive()
{
    return active;
}