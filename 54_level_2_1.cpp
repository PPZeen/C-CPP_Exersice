#include <iostream>
using namespace std;

int main(){

    float x,y,z;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    cout << "Enter your third number: ";
    cin >> z;

    float max,min;
    if (x > y){
        if (x > z){
            max = x;
            if (z > y){
                min = y;
                mean = z;
            }else {
                min = z;
                mean = y;
            }
        } else {
            max = z;
            min = y;
            mean = x;
        }
    }else if (x > z){
        max = y;
        min = z;
        mean = x;
    }else {
        min = x;
        if(y > z){
            max = y;
            mean = z;
        }else{
            max = z;
            mean = y;
        }
    }

    cout << "max :" << max << endl;
    cout << "min :" << min << endl;
    cout << "mean :" << mean << endl;

    system("pause");
    return 0;
}