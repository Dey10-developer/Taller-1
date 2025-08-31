#include <iostream>

using namespace std;

 

int main() {

    int h, m;

    cout << "Ingrese hora y minutos (formato 24h): ";

    cin >> h >> m;

 

    if (h < 0 || h > 23 || m < 0 || m > 59) {

        cout << "Hora no valida.\n";

    } else {

        cout << "Hora valida: "

             << (h < 10 ? "0" : "") << h << ":"

             << (m < 10 ? "0" : "") << m << "\n";

    }

 

    return 0;
}