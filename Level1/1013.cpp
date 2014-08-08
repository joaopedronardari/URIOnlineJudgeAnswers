#include<iostream>
#include<cmath>

using namespace std;

int maior(int a, int b) {
    return (a+b+abs(a-b)) / 2;
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int maiorFinal = maior(maior(a,b),c);
    cout << maiorFinal << " eh o maior" << endl;
    return 0;
}
