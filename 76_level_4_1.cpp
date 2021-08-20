#include <iostream>
using namespace std;

int main(){
    
    int m, n;
    cout << "INPUT" << endl;
    cin >> m >> n;

    int Arey1[n][m];
    int Arey2[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> Arey1[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> Arey2[i][j];
        }
    }
    cout << "OUTPUT" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            Arey1[i][j] += Arey2[i][j];
            cout << Arey1[i][j] << " ";
        }
        cout << endl;
    }
    
    system("pause");
    return 0;
}