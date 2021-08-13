#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter yout number: ";
    cin >> num;

    cout << "Prime numbers less than " << num << ": ";
    for (int i=2; i<num; i++){
        for (int j=2; j <= i;j++){
            if (i%j == 0){
                if (i==j){
                    cout << i << " ";
                }
                break;
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}