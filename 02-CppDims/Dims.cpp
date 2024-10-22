#include<iostream>
#include<array>

using std::cin, std::cout, std::array;

using matrizDeVentas = array<array<int, 12>, 3>;

int main() {
    matrizDeVentas totales{};

    for (int vendedor, mes, importe; cin >>vendedor >> mes >> importe;) {
        totales.at(vendedor).at(mes) += importe;
    }

    cout << "Totales: " << "\n";

    for (auto vendedor : totales) {
        for (auto importe : vendedor) {
            cout << importe << " ";
        }
        cout << '\n';
    }
}