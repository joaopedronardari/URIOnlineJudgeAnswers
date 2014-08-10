#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

const double pi = 3.14159;

int main(){
    int radius;

    cin >> radius;
    double sphereArea = (4.0/3) * pi * pow(radius,3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << sphereArea << endl;
    return 0;
}
