#include <iostream>
#include "Header\Log.h"


int Multiply(int a, int b) {
	Log("Multiply");
	return a * b;
}

void Increment(int* value) {
	// Ohne den Klammern wird die Adresse um 1 erhöht, deshalb "()" derefrenz und dann um 1 hoch
	(*value)++;
}

void Increment(int& value) {
// Referenz wird als Variable gegeben 
	value++;
}