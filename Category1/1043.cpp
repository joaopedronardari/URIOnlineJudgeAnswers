#include<iostream>
#include<cmath>

using namespace std;

void bubble(double numbers[]) {
    for (int i=2; i>=1; i--) {
        for (int z=0; z<i; z++){
            if (numbers[z] < numbers[z+1]) {
                double aux = numbers[z];
                numbers[z] = numbers[z+1];
                numbers[z+1] = aux;
            }
        }
    }
}

int main() {
    double a,b,c;
    cin >> a >> b >> c;

    double numbers[] = {a,b,c};
    bubble(numbers);

    if (numbers[0] > numbers[1] + numbers[2])
        cout << "NAO FORMA TRIANGULO" << endl;
    if (pow(numbers[0],2) == (pow(numbers[1],2) + pow(numbers[2],2)))
        cout << "TRIANGULO RETANGULO" << endl;
    if (pow(numbers[0],2) > pow(numbers[1],2) + pow(numbers[2],2))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if (pow(numbers[0],2) < pow(numbers[1],2) + pow(numbers[2],2))
        cout << "TRIANGULO ACUTANGULO" << endl;
    if (numbers[0] == numbers[1] && numbers[1] == numbers[2])
        cout << "TRIANGULO EQUILATERO" << endl;
    if (numbers[0] == numbers[1] ^ numbers[1] == numbers[2] ^ numbers[0] == numbers[2])
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
