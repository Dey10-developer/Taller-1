 #include <iostream>

#include <string>

using namespace std;

 

int main() {

    int d, m;

    string signo = "";

 

 

    cout << "Ingrese dia y mes de nacimiento: ";

    cin >> d >> m;

 

    if ((m == 2 && d >= 20) || (m == 3 && d <= 20)) {

        signo = "Piscis";

    } else if ((m == 3 && d >= 21) || (m == 4 && d <= 20)) {

        signo = "Aries";

    } else if ((m == 4 && d >= 21) || (m == 5 && d <= 20)) {

        signo = "Tauro";

    } else if ((m == 5 && d >= 21) || (m == 6 && d <= 20)) {

        signo = "Geminis";

    } else if ((m == 6 && d >= 21) || (m == 7 && d <= 22)) {

        signo = "Cancer";

    } else if ((m == 7 && d >= 23) || (m == 8 && d <= 22)) {

        signo = "Leo";

    } else if ((m == 8 && d >= 23) || (m == 9 && d <= 22)) {

        signo = "Virgo";

    } else if ((m == 9 && d >= 23) || (m == 10 && d <= 22)) {

        signo = "Libra";

    } else if ((m == 10 && d >= 23) || (m == 11 && d <= 21)) {

        signo = "Escorpio";

    } else if ((m == 11 && d >= 22) || (m == 12 && d <= 21)) {

        signo = "Sagitario";

    } else if ((m == 12 && d >= 22) || (m == 1 && d <= 19)) {

        signo = "Capricornio";

    } else if ((m == 1 && d >= 20) || (m == 2 && d <= 18)) {

        signo = "Acuario";

    }
if (signo != "") {

        cout << "Su signo zodiacal es " << signo << ".\n";

    } else {

        cout << "Fecha invalida o signo desconocido.\n";

    }

 

    return 0;

}