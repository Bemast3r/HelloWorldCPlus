#include <iostream>
#include "Header\All.h"

static void pointer() {
	void* ptr = NULL;
	// void* ptr = NULL;
	// void* ptr = 0;
	// void* ptr = nullptr;
	int var = 8;
	int* ptrs = &var;
	// Auf die Datei zugreifen
	*ptrs = 10;
	var = 19;
	std::cout << var << std::endl;
	// buffer ist eine adresse
	char* buffer = new char[8];
	memset(buffer, 0, 8);
	char** ptbuf = &buffer;

	delete[] buffer;
	std::cin.get();
}