#include <iostream>

using namespace std;

 

int main() {

    char tipo;

    int n;


    cout << "Tipo de cliente (V=VIP, R=Regular) y cantidad de productos: ";

    cin >> tipo >> n;


    if (tipo != 'V' && tipo != 'R') {

        cout << "Tipo de cliente invalido.\n";

    } else if (n < 0)
{

        cout << "Numero de productos invalido.\n";

    } else if (tipo == 'V') {

        cout << "Descuento del 20%.\n";

    } else { // Cliente Regular

        if (n >= 4) {

            cout << "Descuento del 10%.\n";

        } else {

            cout << "No aplica descuento.\n";

        }

    }

    return 0;

}