#include<array>
#include<cassert>

using std::array;
unsigned const MAX = 10;

struct Punto { double x, y; };
struct Poligono { unsigned lados; array<Punto, MAX> puntos; };

void addPoint(Poligono&, Punto, unsigned);
void removePoint(Poligono&, unsigned);
void setPoint(Poligono&, Punto, unsigned);
unsigned getLados(Poligono);
Punto getPoint(Poligono, unsigned);

int main() {
    Poligono polig {4, {{{0, 0}, {1, 1}, {2, 2}, {3, 3}}}};

    removePoint(polig, 2);
    assert(getLados(polig) == 3);
    assert(getPoint(polig, 2).x == 3);
    assert(getPoint(polig, 2).y == 3);

    addPoint(polig, {2, 2}, 2);
    assert(getLados(polig) == 4);
    assert(getPoint(polig, 2).x == 2);
    assert(getPoint(polig, 2).y == 2);

    setPoint(polig, {4, 4}, 2);
    assert(getPoint(polig, 2).x == 4);
    assert(getPoint(polig, 2).y == 4);
}

void addPoint(Poligono& polig, Punto point, unsigned index) {
    polig.lados++;

    for (int i = polig.lados - 1; i >= index; i--) {
        polig.puntos.at(i) = polig.puntos.at(i - 1);
    }
    polig.puntos.at(index) = point;
}

void removePoint(Poligono& polig, unsigned index) {
    for (int i = index; i < polig.lados; i++) {
        polig.puntos.at(i) = polig.puntos.at(i + 1);
    }
    polig.lados--;
}

void setPoint(Poligono& polig, Punto point, unsigned index) {
    polig.puntos.at(index) = point;
}

unsigned getLados(Poligono polig) {
    return polig.lados;
}

Punto getPoint(Poligono polig, unsigned index) {
    return polig.puntos.at(index);
}