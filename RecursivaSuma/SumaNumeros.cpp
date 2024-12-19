#include <iostream>
using namespace std;
// Funcion recursiva para calcular la suma de los primeros n números naturales
int sumaRecursiva(int n) {
if (n == 0) {
return 0; // Caso base: si n es 0, la suma es 0
} else {
	std::cin.get();
return n + sumaRecursiva(n - 1); // Llamada recursiva para sumar n y los números anteriores
}
}

int main() {
int n;
cout << "Ingrese un nomero entero positivo para calcular la suma de los primeros n numeros naturales: ";
cin >> n;
std::cin.get();

// Validar si n es un numero entero positivo
if (n < 0) {
cout << "El numero ingresado no es valido. Debe ser un numero entero positivo." << endl;
return 1; // Salir del programa con un codigo de error
std::cin.get();
}

// Llamar a la función recursiva para calcular la suma de los primeros n números naturales
int resultado = sumaRecursiva(n);
// Imprimir el resultado
cout << "La suma de los primeros " << n << " numeros naturales es: " << resultado << endl;
return 0;
std::cin.get();
}
