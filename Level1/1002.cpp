#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

int main() {
    double raio;
    cin >> raio;
    double area = raio * raio * PI;
    cout << fixed << setprecision(4);
    cout<<"A="<<area<<endl;
    return 0;
}
