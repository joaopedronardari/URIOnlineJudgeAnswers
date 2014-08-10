#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    double a,b,c;
    cin >> a >> b >> c;

    double r1,r2;
    double delta = pow(b,2) - (4*a*c);
    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

    cout << fixed << setprecision(5);
    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl;
    return 0;
}
