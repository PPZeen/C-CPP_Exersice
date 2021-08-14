#include <iostream>
using namespace std;

string draw(int n){

    string x = "-";
    if (n%2 != 0){
        for (int i=1;i<n;i++){
            x += '-';
        }
    }else{
        for (int i=2;i<n;i++){
            x += '-';
        }
    }
    return x;
}  

int main(){

    int Num, half, h;
    cout << "Enter your Number: ";
    cin >> Num;

    string ans[Num];
    half = Num/2;
    h = half-1;
    if (Num % 2 == 0 ){
        for (int i=0;i<half;i++){
            ans[i] = draw(Num);
            ans[i][half-1-i] = '*';
            ans[i][half-1+i] = '*';
            cout << ans[i] << endl;
        }
        for (int k=half;k<Num;k++){
            ans[k] = draw(Num);
            ans[k][half-1-h] = '*';
            ans[k][half-1+h] = '*';
            cout << ans[k] << endl;
            h -= 1;
        }
    }else {
        for (int j=0;j<half+1;j++){
            ans[j] = draw(Num);
            ans[j][half-j] = '*';
            ans[j][half+j] = '*';
            cout << ans[j] << endl;
        }
        for (int k=half+1;k<Num;k++){
            ans[k] = draw(Num);
            ans[k][half-h] = '*';
            ans[k][half+h] = '*';
            cout << ans[k] << endl;
            h -= 1;
        }
    }
    system("pause");
    return 0;
}
