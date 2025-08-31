#include <iostream>

using namespace std;

       int main() {

const int PIN_CORRECTO = 1234;

int pin, intentos = 0;

double saldo = 1000.0;

// Intentos de PIN hasta 3

while (intentos < 3) {

cout << "Ingrese PIN: ";

cin >> pin;

if (pin == PIN_CORRECTO) {

break;

}

intentos++;

}

if (intentos == 3) {

cout << "Tarjeta bloqueada. Demasiados intentos.\n";

} else {

int op;

cout << "Menu: \n1) Consultar saldo\n2) Retirar\n3) Salir\n";

cin >> op;

if (op == 1) {

cout << "Su saldo es: " << saldo << " Bs.\n";

} else if (op == 2) {

double monto;

cout << "Ingrese monto a retirar: ";

cin >> monto;
if (monto <= saldo) {

saldo -= monto;

cout << "Retire su dinero. Saldo nuevo: " << saldo << " Bs.\n";

} else {

cout << "Fondos insuficientes.\n";

}

} else {

cout << "Gracias. Fin de la operacion.\n";

}

}

   return 0;

}