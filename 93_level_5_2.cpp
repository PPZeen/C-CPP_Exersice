#include <iostream>
using namespace std;

int main(){
    
    int n, index, sum;
    cout << "Enter number: ";
    cin >> n;

    int Arey[n][n];
    for (int i=0; i<n; i++){
        cout << "Enter " << i+1 << " Numbers: "; 
        for (int j=0; j<=i; j++){
            cin >> Arey[i][j];
        }
    }
    index = 0;
    sum = Arey[0][0];
    for (int i=1; i<n ;i++){
        if (Arey[i][index] > Arey[i][index+1]){
            sum += Arey[i][index];
        }else{
            sum += Arey[i][index+1];
            index += 1;
        }
    }
    cout << "sum of the most path: " << sum << endl;
    system("pause");
    return 0;
}