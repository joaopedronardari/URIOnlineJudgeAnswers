#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    double a,b,c;

    while (cin >> a >> b >> c) {
        double delta = pow(b,2) - (4 * a * c);

        if (delta < 0 || 2*a == 0) {
            cout << "Impossivel calcular" << endl;
        } else {
            cout << fixed << setprecision(5);
            cout << "R1 = " << (-b + (sqrt(delta))) / (2 * a) << endl;
            cout << "R2 = " << (-b - (sqrt(delta))) / (2 * a) << endl;
        }
    }

    return 0;
}
