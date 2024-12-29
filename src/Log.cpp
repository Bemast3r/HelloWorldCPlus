#include <iostream>
#include "Header\All.h"



void initLog(const char* message) {
	Log("funktioniert");
}

void Log(const char* message) {
	std::cout << message << std::endl;
}