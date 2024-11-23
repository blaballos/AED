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
Poligono& setPunto (Poligono&, unsigned, Punto);
Poligono& insertInIndex (Poligono&, unsigned, Punto);
Poligono& removeInIndex (Poligono&, unsigned);

int main() {

}

unsigned getSides (const Poligono& poligono) {
    int sides {};
    for (auto aux = poligono.primerNodo; aux; aux = aux->siguienteNodo) {sides++;}
    return sides;
}

Punto getPunto (const Poligono& poligono, unsigned index) {
    Nodo *aux = poligono.primerNodo;
    for (int i = 0; i < index; i++) {aux = aux->siguienteNodo;}
    return aux->punto;
}

Poligono& setPunto (Poligono& poligono, unsigned index, Punto punto) {
    Nodo *aux = poligono.primerNodo;
    for (int i = 0; i < index; i++) {aux = aux->siguienteNodo;}
    aux->punto = punto;
    return poligono;
}