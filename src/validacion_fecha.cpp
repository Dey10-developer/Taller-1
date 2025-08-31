#include <iostream>
using namespace std;

bool esBisiesto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int main() {
    int d, m, a;
    cout << "Ingrese dia, mes, ano (dd mm aaaa): ";
    cin >> d >> m >> a;

    bool valido = true;
    int maxDias = 31;

    // Validar mes y día mínimo
    if (m < 1 || m > 12 || d < 1) {
        valido = false;
    } else {
        // Determinar cantidad máxima de días según el mes
        if (m == 2) {
            maxDias = esBisiesto(a) ? 29 : 28;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            maxDias = 30;
        }

        if (d > maxDias) {
            valido = false;
        }
    }

    if (valido) {
        cout << "La fecha es valida." << endl;
    } else {
        cout << "La fecha es invalida." << endl;
    }

    return 0;
}