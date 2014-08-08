#include<iostream>

using namespace std;

int main(){
    int km;
    cin >> km;

    double xVelocity = 90.0; // km/h
    double yVelocity = 60.0; // km/h

    /* Formula
     * (so + v*t) -> 0 + 90*t = km + 60 * t
     * -> (90-60)*t = km -> t = km/(90-60)
     */
    double time = km / (xVelocity - yVelocity);
    time = 60 * time;
    cout << time << " minutos" << endl;
    return 0;
}
