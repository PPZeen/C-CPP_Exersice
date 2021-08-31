#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;

void gotoxy(short x, short y){
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void draw_ship(int x, int y){
    gotoxy(x, y);  
    cout << " <-0-> " << endl;
}
void erase_ship(int x, int y){
    gotoxy(x, y);  
    cout << "       " << endl;
}
int main(){
    char ch = ' ';
    int x=38, y=20;
    draw_ship(x,y);
    do{
        if (_kbhit()){
            ch = _getch();
            if (ch == 'a' && x > 0){draw_ship(--x,y);}
            if (ch == 'd' && x < 113){draw_ship(++x,y);}
            if (ch == 'w' && y > 0){erase_ship(x,y); draw_ship(x,--y);}
            if (ch == 's' && y < 28){erase_ship(x,y); draw_ship(x,++y);}
            fflush(stdin);
        }
    Sleep(100);
    } while(ch != 'x');
    
    return 0;
}