#include<iostream>

using namespace std;

int main() {
    string t1,t2,t3;
    cin >> t1 >> t2 >> t3;

    if (t1 == "vertebrado") {
        if (t2 == "ave") {
            if (t3 == "carnivoro") {
                cout << "aguia";
            } else {
                cout << "pomba";
            }
        } else {
            if (t3 == "onivoro") {
                cout << "homem";
            } else {
                cout << "vaca";
            }
        }
    } else {
        if (t2 == "inseto") {
            if (t3 == "hematofago") {
                cout << "pulga";
            } else {
                cout << "lagarta";
            }
        } else {
            if (t3 == "hematofago") {
                cout << "sanguessuga";
            } else {
                cout << "minhoca";
            }
        }
    }

    cout << endl;
}
