#pragma once

class Spawnable
{
protected:

    bool active;
    int x, y;

public:

    Spawnable();
    virtual ~Spawnable() {}

    void SetPosition(int x, int y);
    void SetActive(bool active);
    bool IsActive();
};

