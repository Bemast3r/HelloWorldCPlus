#include <iostream>
#include "Log.h"
/// <Hotkeys>
/// Strg + F7 = Kompilieren
/// <Notes>
/// static --> nur für den File 
/// <returns></returns>

int Multiply(int a, int b);

int main() 
{

	for (int i = 0; i < 5; i++) {
		if (i > 2)
			continue;
		Log("hello World");
	}

	std::cin.get();
} 
 