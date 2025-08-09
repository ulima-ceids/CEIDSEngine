#include <iostream>
#include "matematica.h"

// Entrypoint
int main()
{
	std::cout << "Mi primer programa en  C++" << "\n";
	float resultado = sumar(34.5f, 40.f);
	std::cout << "El resultado es: " << resultado << "\n";
	return 0;
}