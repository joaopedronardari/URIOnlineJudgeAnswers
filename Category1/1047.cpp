#include<iostream>

using namespace std;

int main() {
    int startHour,startMinute,endHour,endMinute;
    cin >> startHour >> startMinute >> endHour >> endMinute;

    int totalMinutes,startTotalMinutes,endTotalMinutes;

    startTotalMinutes = startHour * 60 + startMinute;
    endTotalMinutes = endHour * 60 + endMinute;

    totalMinutes = endTotalMinutes - startTotalMinutes;

    if (startTotalMinutes<=endTotalMinutes)
            if (totalMinutes == 0)
                cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
            else
                cout << "O JOGO DUROU " << (totalMinutes-(totalMinutes%60))/60 << " HORA(S) E " << totalMinutes%60 << " MINUTO(S)" << endl;
    else {
        totalMinutes = (24*60 - startTotalMinutes) + endTotalMinutes;
        cout << "O JOGO DUROU " << (totalMinutes-(totalMinutes%60))/ 60 << " HORA(S) E " << (totalMinutes%60) << " MINUTO(S)" << endl;
    }
}
