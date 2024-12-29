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
	int a = 8;
	a++;
	const char* string = "Hello";


	int condition = 8;
	bool comparision = condition == 5;

 	if (comparision) {
		Log("Ist True");
		return 0;
	}
	else if(condition == 8){
		Log("8");
	}
	else {
		Log("Nicht true");
	}

	Log("New Worlds");
	int res = Multiply(5, 8);
	std::cout << res << std::endl;
	std::cin.get();
} 
