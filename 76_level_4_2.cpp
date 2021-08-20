#include <iostream>
using namespace std;

int main(){
    
    int m, n;
    cout << "INPUT" << endl;
    cin >> m >> n;

    int ans[n+1][m+1] = {0};
    int Arrey[n+1][m+1];
    for (int k=1; k<=2; k++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                cin >> Arrey[i][j];
                ans[i][j] += Arrey[i][j];
            }
        }
    }
    cout << "OUTPUT" << endl;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}