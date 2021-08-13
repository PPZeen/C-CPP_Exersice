#include <iostream>
using namespace std;

void check_pn(int n) {
    int i = 2;
    while (i <= n){
        if (n%i == 0){
            break;
        }
        i += 1;
    }
    if (i == n){
        cout << n << " ";
    }
}

int main(){

    int num;
    cout << "Enter yout number: ";
    cin >> num;
    cout << "Prime numbers less than " << num << ": ";

    for (int i=2; i<num;i++){
        check_pn(i);
    }
    cout << endl;
    system("pause");
    return 0;
}