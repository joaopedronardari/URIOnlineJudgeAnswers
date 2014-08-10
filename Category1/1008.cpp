#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int employeeNumber,workedHours;
    double moneyPerHour;

    // receive info
    cin >> employeeNumber;
    cin >> workedHours;
    cin >> moneyPerHour;

    // calc salary
    double salary = workedHours * moneyPerHour;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << employeeNumber << endl;
    cout << "SALARY = U$ " << salary << endl;
    return 0;
}
