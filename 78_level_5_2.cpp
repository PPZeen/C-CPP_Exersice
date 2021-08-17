#include <iostream>
#include <numeric>
using namespace std;

int main(){
    
    int n, check, sumr, sumc;
    cout << "Enter line Number: ";
    cin >> n;

    int Arey[n][n];
    for (int i=0; i<n; i++){
        cout << "Input " << n << " numbers separated by spaces: ";
        for (int j=0; j<n;j++){
            cin >> Arey[i][j];
        }
    }
    check = 0;
    for (int k=0; k<n; k++){
        check += Arey[0][k];
    }
    bool ch = true;
    for (int i=0; i<n; i++){
        sumr = 0;
        sumc = 0;
        for (int j=0; j<n; j++){
            sumr += Arey[i][j];
            sumc += Arey[j][i];
        }
        if (sumr != check || sumc != check){
            cout << "No" << endl;
            ch = false;
            break;
        }
    }
    if (ch == true){ cout << "Yes" << endl; }

    system("pause");
    return 0;
}