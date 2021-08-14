#include <iostream>
#include <string>

using namespace std;


int main() {

    cout << "Input your number: ";
    int x;
    cin >> x;
    if (x%2 == 0 ){
        int k = x/2;
        string arey[k];
        for (int i=0; i<k;i++) {
            string ans = "-";
            for (int j=1; j<x-1; j++) {
                ans += "-";
            }
            ans[k-1+i] = '*';
            ans[k-1-i] = '*';
            arey[i] = ans;
            cout << ans << endl;    
        }
        for (int i=0; i<k; i++){
            cout << arey[k-1-i] << endl;
        }
    }
    else {
        int k = (x-1)/2;
        string arey[k+1];
        for (int i=0; i<k+1;i++) {
            string ans = "-";
            for (int j=0; j<x-1; j++) {
                ans += "-";
            }
            ans[k+i] = '*';
            ans[k-i] = '*';
            arey[i] = ans;
            cout << ans << endl;    
        }
        for (int i=0; i<k; i++){
        cout << arey[k-1-i] << endl;
        }
    }
    system("pause");
    return 0;
}