#include <iostream>
using namespace std;

int main() {
    double A, B;
    char op;

    cout << "Ingresa la operacion (ejemplo: 5 + 3): ";
    cin >> A >> op >> B;

    if (op == '+') {
        cout << "Suma: " << (A + B) << endl;
    } 
    else if (op == '-') {
        cout << "Resta: " << (A - B) << endl;
    } 
    else if (op == '*') {
        cout << "Multiplicacion: " << (A * B) << endl;
    } 
    else if (op == '/') {
        if (B != 0) {
            cout << "Division: " << (A / B) << endl;
        } else {
            cout << "Error: division entre cero.\n";
        }
    } 
    else {
        cout << "Operador invalido.\n";
    }

    return 0;
}