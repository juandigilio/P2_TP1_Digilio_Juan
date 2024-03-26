#include "ConsoleManager.h"

COORD ConsoleManager::consoleSize{};
HANDLE ConsoleManager::hwnd{};

ConsoleManager::ConsoleManager(int wide, int height)
{
    consoleSize.X = wide;
    consoleSize.Y = height;

    SetConsoleSize();
}

ConsoleManager::~ConsoleManager()
{
}

void ConsoleManager::SetConsoleSize()
{
    SMALL_RECT rect;

    rect.Top = 0;
    rect.Left = 0;
    rect.Bottom = consoleSize.Y - 1;
    rect.Right = consoleSize.X - 1;

    hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleScreenBufferSize(hwnd, consoleSize);
    SetConsoleWindowInfo(hwnd, TRUE, &rect);

    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
    cci.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

void ConsoleManager::SetCursor(COORD& position, Color& color)
{
    SetConsoleCursorPosition(hwnd, position);
    SetConsoleTextAttribute(hwnd, static_cast<int>(color));
}
