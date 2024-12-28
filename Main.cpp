#include <iostream>
#include "Log.h"
/// <Hotkeys>
/// Strg + F7 = Kompolieren
/// <Notes>
/// static --> nur für den File 
/// <returns></returns>

int Multiply(int a, int b);

int main() 
{
	int a = 8;
	a++;
	const char* string = "Hello";

	for (int i = 0; i < 5; i++) {
		const char c = string[i];
		std::cout << c << std::endl;
	}

	Log("New Worlds");
	int res = Multiply(5, 8);
	std::cout << res << std::endl;
	std::cin.get();
} 
