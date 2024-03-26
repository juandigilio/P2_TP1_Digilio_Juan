#pragma once

#include <Windows.h>

class Spawnable
{
protected:

    bool active;
    COORD position;

public:

    Spawnable();
    virtual ~Spawnable() {}

    void SetPosition();
    void SetActive(bool active);
    bool IsActive();
};

