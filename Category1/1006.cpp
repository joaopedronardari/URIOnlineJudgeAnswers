#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota1,nota2,nota3;
    double peso1 = 2;
    double peso2 = 3;
    double peso3 = 5;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    double MEDIA = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1+peso2+peso3);
    cout << fixed << setprecision(1);
    cout<<"MEDIA = "<<MEDIA<<endl;
    return 0;
}
