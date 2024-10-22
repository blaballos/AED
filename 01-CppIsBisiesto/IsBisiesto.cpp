#include<iostream>

using std::cin, std::cout;

bool isBisiesto(unsigned);
bool isMultiplo(unsigned, unsigned);

int main() {
    unsigned year;
    cout << "Ingrese un anio para verificar si es bisiesto: ";
    cin >> year;
    isBisiesto(year) == 0 ? cout << "El anio ingresado NO es bisiesto." : cout << "El anio ingresado SI es bisiesto.";
}

bool isBisiesto(unsigned year) {
    return (isMultiplo(year, 4) && !isMultiplo(year, 100)) || isMultiplo(year, 400); 
}

bool isMultiplo(unsigned n, unsigned d) {
    return n % d == 0;
}