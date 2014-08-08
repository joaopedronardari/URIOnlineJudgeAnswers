#include<iostream>

using namespace std;

void updateValue(int *total, int* vl, int diasPorValue){
    *vl = *total / diasPorValue;
    *total -= *vl * diasPorValue;
}

int main() {
    int diasTotais;
    cin >> diasTotais;
    int a,m,d;
    updateValue(&diasTotais,&a,365);
    updateValue(&diasTotais,&m,30);
    updateValue(&diasTotais,&d,1);

    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}
