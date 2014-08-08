#include<iostream>

using namespace std;

void update(long * total, int * qtd, int valor) {
    *qtd = *total / valor;
    *total -= valor * (*qtd);
}

int main() {
    long total;
    cin >> total;
    long totalPrint = total;

    int cem,cinq,vin,dez,cinc,dois,um;

    update(&total, &cem,  100);
    update(&total, &cinq, 50);
    update(&total, &vin,  20);
    update(&total, &dez,  10);
    update(&total, &cinc, 5);
    update(&total, &dois, 2);
    update(&total, &um,   1);

    cout << totalPrint << endl;
    cout << cem  << " nota(s) de R$ 100,00" << endl;
    cout << cinq << " nota(s) de R$ 50,00"  << endl;
    cout << vin  << " nota(s) de R$ 20,00"  << endl;
    cout << dez  << " nota(s) de R$ 10,00"  << endl;
    cout << cinc << " nota(s) de R$ 5,00"   << endl;
    cout << dois << " nota(s) de R$ 2,00"   << endl;
    cout << um   << " nota(s) de R$ 1,00"   << endl;
    return 0;
}
