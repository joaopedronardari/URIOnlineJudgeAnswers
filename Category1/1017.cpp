#include<iostream>
#include<iomanip>

using namespace std;

const int johnsCarConsume = 12.0; // km/l

int main() {
    int travelingHours, averageVelocity;
    cout << fixed << setprecision(3);
    while(cin >> travelingHours >> averageVelocity){
        double kilometers = travelingHours * averageVelocity;

        cout << kilometers / johnsCarConsume << endl;
    }
    return 0;
}
