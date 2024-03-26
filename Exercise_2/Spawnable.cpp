#include "Spawnable.h"

#include "ConsoleManager.h"

Spawnable::Spawnable()
{
    active = false;
    position.X = 0;
    position.Y = 0;
}

void Spawnable::SetPosition()
{
    position.X = rand() % ConsoleManager::consoleSize.X;
    position.Y = rand() % ConsoleManager::consoleSize.Y;
}

void Spawnable::SetActive(bool isActive)
{
    active = isActive;
}

bool Spawnable::IsActive()
{
    return active;
}