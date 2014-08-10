#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double fixedSalary, salesSum;

    // capture info
    cin >> name;
    cin >> fixedSalary;
    cin >> salesSum;

    // calc salary
    double finalSalary = fixedSalary + (salesSum * 0.15);

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << finalSalary << endl;
    return 0;
}
