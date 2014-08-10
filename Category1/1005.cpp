#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota1,nota2;
    double peso1 = 3.5;
    double peso2 = 7.5;
    cin >> nota1;
    cin >> nota2;
    double MEDIA = ((nota1 * peso1) + (nota2 * peso2)) / (peso1+peso2);
    cout << fixed << setprecision(5);
    cout<<"MEDIA = "<<MEDIA<<endl;
    return 0;
}
