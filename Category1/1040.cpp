#include<iostream>
#include<iomanip>

using namespace std;

const string APPROVED = "Aluno aprovado.";
const string REC = "Aluno em exame.";
const string FLUNKED = "Aluno reprovado.";
const string ENTER_REC = "Nota do exame: ";
const string AVG = "Media: ";
const string FINAL_AVG = "Media final: ";

double calcMedia(double n1, double n2, double n3, double n4) {
    return ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / (2+3+4+1);
}

int main(){
    double n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;

    cout << fixed << setprecision(1);

    double mediaFinal = calcMedia(n1,n2,n3,n4);

    cout << AVG << mediaFinal << endl;
    if (mediaFinal>=7)
        cout << APPROVED << endl;
    else if (mediaFinal >= 5) {
        cout << REC << endl;
        double mediaExame;
        cin >> mediaExame;
        cout << ENTER_REC << mediaExame << endl;
        mediaFinal = (mediaExame+mediaFinal) / 2;
        if (mediaFinal >= 5)
            cout << APPROVED << endl;
        else
            cout << FLUNKED << endl;
    } else
        cout << FLUNKED << endl;

    cout << FINAL_AVG << mediaFinal << endl;
    return 0;
}
