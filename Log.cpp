#include <iostream>
#include "Log.h"

/// Funktion = Definition
/// Body = der Code drin
/// <param name="message"></param>


void initLog(const char* message) {
	Log("funktioniert");
}

void Log(const char* message) {
	std::cout << message << std::endl;
}