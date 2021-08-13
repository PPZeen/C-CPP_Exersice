#include <iostream>
using namespace std;

int main() {

    float myNum[3];
    float Max, Min, Mean, max_1, min_1, check;

    cout << "Enter your first number: ";
    cin >> myNum[0];
    cout << "Enter your second number: ";
    cin >> myNum[1];
    cout << "Enter your third number: ";
    cin >> myNum[2];

    max_1 = max(myNum[0],myNum[1]);
    Max = max(max_1, myNum[2]);
    min_1 = min(myNum[0],myNum[1]);
    Min = min(min_1,myNum[2]);

    for (int i=0; i<3; i++){
        check = myNum[i];
        if (check != Max){
            if (check != Min){
                Mean = check;
                break;
            }
        }
    }

    cout << "max: " << Max << endl;
    cout << "min: " << Min << endl;
    cout << "mean: " << Mean << endl;

    system("pause");
    return 0;
}