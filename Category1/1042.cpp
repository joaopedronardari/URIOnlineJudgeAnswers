#include<iostream>

using namespace std;

void bubble(int numbers[]) {
    for (int i=2; i>=1; i--) {
        for (int z=0; z<i; z++){
            if (numbers[z] > numbers[z+1]) {
                int aux = numbers[z];
                numbers[z] = numbers[z+1];
                numbers[z+1] = aux;
            }
        }
    }
}

void printArray(int numbers[]){
    for (int i=0;i<3;i++){
        cout << numbers[i] << endl;
    }
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int numbers[] = {a,b,c};
    bubble(numbers);
    printArray(numbers);
    cout << endl;
    int numbersNew[] = {a,b,c};
    printArray(numbersNew);
    return 0;
}
