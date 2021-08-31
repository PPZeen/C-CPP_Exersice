#include <iostream>
using namespace std;

int isPrime(int n) {
    int i = 2;
    while (i<=n){
        if(n%i == 0){ break;}
        i++;
    }
    if (i == n){return 1;}
    else {return 0;}
}

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if (isPrime(num) == 1) {cout << "Prime number" << endl;}
    else {cout << "Not Prime number" << endl;}
    return 0;
}