#include <iostream>
using namespace std;

int main(){
    
    int n, index, first, second, ans;
    cout << "Enter your number of lines: ";
    cin >> n;

    int Arey[n][n];
    for (int i=1; i<n+1; i++){

        cout << "Enter " << i << " numbers separated by spaces: ";
        for (int j=0 ;j<i; j++){
            cin >> Arey[i-1][j];
        }
    }
    ans = Arey[0][0];
    index = 0;
    for (int i=1; i<n; i++){
        first = Arey[i][index];
        second = Arey[i][index+1];      
        if (Arey[i][index] > second){
            ans += first;
        }else {
            ans += second;
            index += 1;
        }
    }
    cout << "sum of the most path: " << ans << endl;
    system("pause");
    return 0;
}