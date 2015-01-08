/* 1045 */
#include<iostream>
#include <cmath>

using namespace std;

void bubble(double *numbers) {
    int len = sizeof(numbers) - 1;
    for (int i=0; i < len - 1; i++) {
        for (int z=0; z < len - (i + 1); z++) {
            if (numbers[z] < numbers[z+1]) {
                double temp = numbers[z];
                numbers[z] = numbers[z+1];
                numbers[z+1] = temp;
            }
        }
    }
}

void checkTriangulos(double *numbers) {
    double a = numbers[0];
    double b = numbers[1];
    double c = numbers[2];

    if (a>=(b+c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (pow(a,2) == pow(b,2)+pow(c,2)) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if (pow(a,2) > pow(b,2)+pow(c,2)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else if (pow(a,2) < pow(b,2)+pow(c,2)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || b == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
}

int main() {
    double *numbers = new double[3];
    while (cin >> numbers[0] >> numbers[1] >> numbers[2]) {
        bubble(numbers);
        checkTriangulos(numbers);
    }
    return 0;
}

