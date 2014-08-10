#include<iostream>
#include<iomanip>

#define TOTAL_VALUES 12

using namespace std;

void initializeCounts(double counts[TOTAL_VALUES][2]){
    counts[0][1] = 100;
    counts[1][1] = 50;
    counts[2][1] = 20;
    counts[3][1] = 10;
    counts[4][1] = 5;
    counts[5][1] = 2;
    counts[6][1] = 1;
    counts[7][1] = 0.50;
    counts[8][1] = 0.25;
    counts[9][1] = 0.10;
    counts[10][1] = 0.05;
    counts[11][1] = 0.01;
}

void printCounts(double counts[TOTAL_VALUES][2]){
    cout << fixed << setprecision(2);
    for (int i =0; i< TOTAL_VALUES; i++) {
        if (i == 0) cout << "NOTAS:" << endl;
        if (i == 6) cout << "MOEDAS:" << endl;
        if (i<=5) {
            cout << setprecision(0) << counts[i][0] << " nota(s) de R$ " << setprecision(2) << counts[i][1] << endl;
        } else {
            cout << setprecision(0) << counts[i][0] << " moeda(s) de R$ " << setprecision(2) << counts[i][1] << endl;
        }
    }
}

void calcValue(double value, double counts[TOTAL_VALUES][2]) {
    double total = value;
    for (int i = 0; i<TOTAL_VALUES; i++) {
        int moneyCount = total / counts[i][1];
        counts[i][0] = double(moneyCount);
        total -= moneyCount * counts[i][1];
    }
}

int main() {
    double valor;
    cin >> valor;

    double counts[TOTAL_VALUES][2] = {0};
    initializeCounts(counts);
    calcValue(valor,counts);
    printCounts(counts);

    return 0;
}
