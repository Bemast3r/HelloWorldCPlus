#include <iostream>
#include "Header\Log.h"

void Ref() {
	// Variable selbst
	int a = 5;
	int x = 10;
	// Speicheradresse der Variable
	int* b = &a;
	//Increment(b); Pointer Methode 
	// Referenz (Variable direkt) keine Adresse
	int& ref = a;
	// Wenn man nun sagt das ref = x ist, dann wird x nicht verändert sondern a bekommt den wert x
	ref = x; // a = x; 
	// Um die Referenz zu ändern muss ein Pointer verwendet werden
	int* poiRef = &a;
	*poiRef = 2;
	std::cout << *poiRef << std::endl;
	std::cout << a << std::endl;
	poiRef = &x;
	*poiRef = 1;
	std::cout << x << std::endl;
	std::cout << *poiRef << std::endl;
	std::cin.get();
}