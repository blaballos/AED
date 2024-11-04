#include<array>
#include<cassert>

using std::array;
unsigned const MAX_LADOS = 100;

struct Punto { double x, y; };
struct Poligono { array<Punto, MAX_LADOS> puntos; unsigned lados; };

int main() {

}