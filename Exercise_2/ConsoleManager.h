#pragma once

#include <Windows.h>

enum class Color
{
	RED = 12,
	GREEN = 10,
	BLUE = 9
};

class ConsoleManager
{
public:

	COORD cursorPosition;
	COORD consoleSize;
	static HANDLE hwnd;

	ConsoleManager(int& wide, int& height);
	~ConsoleManager();

	void SetConsoleSize();
	static void SetCursor(COORD& position, Color& color);
};

