#include<array>
#include<cassert>

using std::array;
unsigned const MAX_LADOS = 100;

struct Punto { double x, y; };
struct Poligono { array<Punto, MAX_LADOS> puntos; unsigned lados; };

void addPoint(Poligono&, Punto, unsigned);
void removePoint(Poligono&, unsigned);
void setPoint(Poligono&, Punto, unsigned);
unsigned getLados(const Poligono&);
Punto getPoint(const Poligono&, unsigned);

int main() {

}

void addPoint(Poligono& polig, Punto point, unsigned index) {
    assert(index < MAX_LADOS);
    polig.lados++;

    for (int i = polig.lados; i > index; i--) {
        polig.puntos.at(i) = polig.puntos.at(i - 1);
    }
}

void removePoint(Poligono& polig, unsigned index) {
    assert(index < MAX_LADOS);
    
    for (int i = index; i < polig.lados; i++) {
        polig.puntos.at(i) = polig.puntos.at(i + 1);
    }
    polig.lados--;
}