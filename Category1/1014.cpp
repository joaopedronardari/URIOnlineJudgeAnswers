#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int distance;
    double fuel;

    cin >> distance;
    cin >> fuel;

    double kmPerLiter = distance / fuel;

    cout << fixed << setprecision(3);
    cout << kmPerLiter << " km/l" << endl;
    return 0;
}
