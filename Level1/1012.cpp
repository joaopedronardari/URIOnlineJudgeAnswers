#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

const double pi = 3.14159;

int main() {
    double A,B,C;

    cin >> A >> B >> C;

    double
    trianguloArea,
    circuloArea,
    trapezioArea,
    quadradoArea,
    retanguloArea;

    trianguloArea = (A * C) / 2.0;
    circuloArea   = pi * pow(C,2);
    trapezioArea  = ((A+B)*C) / 2.0;
    quadradoArea  = B*B;
    retanguloArea = A*B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << trianguloArea << endl;
    cout << "CIRCULO: "   << circuloArea   << endl;
    cout << "TRAPEZIO: "  << trapezioArea  << endl;
    cout << "QUADRADO: "  << quadradoArea  << endl;
    cout << "RETANGULO: " << retanguloArea << endl;

    return 0;
}
