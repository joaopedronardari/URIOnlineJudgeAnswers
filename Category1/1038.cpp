#include<iostream>
#include<iomanip>

using namespace std;

double giveMeTotal(int cod, int qtd) {
    switch(cod) {
    case 1:
        return 4 * qtd;
    case 2:
        return 4.5 * qtd;
    case 3:
        return 5 * qtd;
    case 4:
        return 2 * qtd;
    case 5:
        return 1.5 * qtd;
    }
    return 0;
}

int main() {
    int cod,qtd;
    cin >> cod >> qtd;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << giveMeTotal(cod,qtd) << endl;
    return 0;
}
