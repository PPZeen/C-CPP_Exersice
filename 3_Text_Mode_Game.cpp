#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
using namespace std;

void gotoxy(short x, short y){
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void draw_ship(int x, int y){
    gotoxy(x, y);  
    cout << " <-0-> " << endl;
}
void draw_bullet(int x, int y){
    gotoxy(x, y);
    cout << "^" << endl;
}
void clear_bullet(int x, int y){
    gotoxy(x, y);
    cout << " " << endl;
}
void draw_star(int x, int y){
    gotoxy(x, y);
    cout << "*" << endl;
}
void clear_star(int x,int y){
    gotoxy(x,y);
    cout << " " << endl;
}
char cursor(short x, short y){
    HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
    char buf[2]; COORD c = {x,y}; DWORD num_read;
    if(!ReadConsoleOutputCharacter(hStd,(LPTSTR)buf,1,c,(LPDWORD)&num_read)){return '\0';}
    else {return buf[0];}
}
void generate(int x){
    int rx,ry, count = 0;
    srand(time(NULL ));
    while (count < x){
        rx = rand();
        if (rx>9 && rx<71){ 
            ry = rand();
            if (ry>1 && ry<6){draw_star(rx,ry); count += 1;}
        }
    }
}
int main(){
    generate(20);
    gotoxy(72,1); cout << "SCORE : 0";
    char ch = ' ';
    int x=38, y=20;
    int bx,by;
    int bullet = 0;
    int score = 0;
    draw_ship(x,y);
    do {
        if (_kbhit()){
            ch=_getch();
            if(ch == 'a' && x>0) {draw_ship(--x,y);}
            if(ch == 's' && x<67) {draw_ship(++x,y);}
            if(bullet != 1 && ch == ' ') {bullet=1; bx=x+3; by=y-1;Beep(450,100);}
            fflush(stdin);
        }
        if (bullet == 1) {
            clear_bullet(bx,by);
            if (by == 2) {bullet = 0;}
            else {
                if (cursor(bx,by-1) != '*'){draw_bullet(bx,--by);}
                else {clear_star(bx,by-1); Beep(200,150); bullet = 0; score+=1; gotoxy(72,1); cout << "SCORE : " << score; generate(1);}
            }
        }
        Sleep(100);
    } while (ch != 'x');

    return 0;
}