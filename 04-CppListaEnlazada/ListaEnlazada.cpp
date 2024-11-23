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

Poligono& insertInIndex (Poligono& poligono, unsigned index, Punto punto) {
    Nodo *nodoNuevo = new Nodo();
    nodoNuevo->punto = punto;

    if (index == 0) {
        nodoNuevo->siguienteNodo = poligono.primerNodo;
        poligono.primerNodo = nodoNuevo;

        return poligono;
    } else {
        Nodo *aux = poligono.primerNodo;
        for (int i = 0; i < index - 1; i++) {aux = aux->siguienteNodo;}
        
        nodoNuevo->siguienteNodo = aux->siguienteNodo;
        aux->siguienteNodo = nodoNuevo;

        return poligono;
    }
}