#include<iostream>

using namespace std;

void printInterval(string intv) {
    cout << "Intervalo " << intv << endl;
}

int main() {
    double value;
    cin >> value;

    if (value > 100 || value < 0) {
        cout << "Fora de intervalo" << endl;
        return 0;
    }

    if (value <= 25)
        printInterval("[0,25]");
    else if (value > 25 && value <= 50)
        printInterval("(25,50]");
    else if (value > 50 && value <= 75)
        printInterval("(50,75]");
    else if (value > 75 && value <= 100)
        printInterval("(75,100]");

    return 0;
}
