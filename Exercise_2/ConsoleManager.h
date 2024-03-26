#pragma once

#include <Windows.h>

enum class Color
{
	RED = 199,
	GREEN = 160,
	BLUE = 159
};

class ConsoleManager
{
public:

	COORD cursorPosition;
	static COORD consoleSize;
	static HANDLE hwnd;

	ConsoleManager(int wide, int height);
	~ConsoleManager();

	void SetConsoleSize();
	static void SetCursor(COORD& position, Color& color);
};

