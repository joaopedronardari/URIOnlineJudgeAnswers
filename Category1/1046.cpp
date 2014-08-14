#include<iostream>

using namespace std;

int main() {
    int startH,endH;
    cin >> startH >> endH;

    int hours;
    if (startH > endH)
        hours = (24 - startH) + endH;
    else
        hours = endH - startH;

    cout << "O JOGO DUROU " << hours << " HORA(S)" << endl;
}
