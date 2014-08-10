#include<iostream>

using namespace std;

void updateValue(int *total, int* vl, int segundosPorValue){
    *vl = *total / segundosPorValue;
    *total -= *vl * segundosPorValue;
}

int main() {
    int segundosTotais;
    cin >> segundosTotais;
    int h,m,s;
    updateValue(&segundosTotais,&h,3600);
    updateValue(&segundosTotais,&m,60);
    updateValue(&segundosTotais,&s,1);

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}
