#include <iostream>
#include <string>

struct Punto {double x, y;};
struct Poligono {Nodo *primerNodo = nullptr;};
struct Nodo {
    Punto punto {};
    Nodo *siguienteNodo = nullptr;
};

unsigned getSides (const Poligono&);
Punto getPunto (const Poligono&, unsigned);
Poligono& insertInIndex (Poligono&, unsigned, Punto);
Poligono& removeInIndex (Poligono&, unsigned);
Poligono& setPunto (Poligono&, unsigned, Punto);

int main() {

}