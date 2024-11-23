#include <iostream>
#include <string>

struct Punto {double x, y;};
struct Poligono {Nodo *primerNodo = nullptr;};
struct Nodo {
    Punto punto {};
    Nodo *siguienteNodo = nullptr;
};

int main() {

}