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