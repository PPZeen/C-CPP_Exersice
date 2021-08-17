#include <iostream>
using namespace std; 

int check(int x[], int n){
    int y = x[0];
    for (int i=1; i<n; i++){
        if (x[i] != y){
            return 1;
        }
    }
    return 0;
}

int main(){

    int n, sum1, sum2;
    cout << "Enter line Number: ";
    cin >> n;

    int Arey[n][n];
    int ans1[n];
    int ans2[n];
    for (int i=0; i<n; i++){
        cout << "Input " << n << " numbers separated by spaces: ";
        sum1 = 0;
        for (int j=0; j<n;j++){
            cin >> Arey[i][j];
            sum1 += Arey[i][j];
        }
        ans1[i] = sum1;
    }
    if (check(ans1, n) == 1){
        cout << "No" << endl;
    }else{
        for (int i=0; i<n; i++){
            sum2 = 0;
            for (int j=0; j<n; j++){
                sum2 += Arey[j][i];
            }
            ans2[i] = sum2;
        }
        if (check(ans2, n) == 1){
            cout << "No" << endl;
        }else { cout << "Yes" << endl; }
    }
    system("pause");
    return 0;
}