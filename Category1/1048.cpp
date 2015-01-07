/** 1048 **/
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    float salarioInicial;
    cin >> salarioInicial;

    float percentual;

    if (salarioInicial <= 400.0) {
        percentual = 0.15;
    } else if (salarioInicial <= 800.0) {
        percentual = 0.12;
    } else if (salarioInicial <= 1200.0) {
        percentual = 0.10;
    } else if (salarioInicial <= 2000.0) {
        percentual = 0.07;
    } else {
        percentual = 0.04;
    }

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salarioInicial * (1+percentual) << endl;
    cout << "Reajuste ganho: " << (salarioInicial * (1+percentual)) - salarioInicial << endl;
    cout << setprecision(0) << "Em percentual: " << percentual * 100 << " %" << endl;

    return 0;
}
