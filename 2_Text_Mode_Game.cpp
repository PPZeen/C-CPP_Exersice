#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoxy(short x, short y){
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void setcolor(int fg,int bg){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, bg*16+fg);
}
void draw_ship(int x, int y){
    gotoxy(x, y);  
    cout << " <-0-> " << endl;
}
void erase_ship(int x, int y){
    gotoxy(x, y);
    cout << "       " << endl;
}
void draw_am(int x, int y){
    gotoxy(x, y);
    setcolor(7,0);
    cout << "^" << endl;
}
void erase_am(int x, int y){
    gotoxy(x, y);
    cout << " " << endl;
}
void setcursor(bool visible){
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = 20;
    SetConsoleCursorInfo(console,&lpCursor);
}
int main(){
    setcursor(0); // ลบเคอร์เซอร์บนจอภาพ
    setcolor(2,4); // เซตสียาน
    char ch = ' '; // เก็บการกดปุ่ม
    char drt = ' '; // สถานะปุ่มเคลื่อนที่
    string am_1 = "OFF"; // สถานะกระสุน
    string am_2 = "OFF";
    string am_3 = "OFF";
    string am_4 = "OFF";
    string am_5 = "OFF";
    int x=38, y=20; // ตำแหน่งเริ่มต้นของยาน
    int u1,v1,u2,v2,u3,v3,u4,v4,u5,v5; //ตำแหน่งของกระสุน
    draw_ship(x,y); // วาดยานที่ตำแหน่งเริ่มต้น

    do{
        if (_kbhit()){
            ch = _getch();
            if (ch == 'a' && x > 0){
                erase_ship(x,y); setcolor(2,4); draw_ship(--x,y);
                drt = 'L';
            }
            if (ch == 'd' && x < 73){
                erase_ship(x,y); setcolor(2,4); draw_ship(++x,y);
                drt = 'R';
            }
            if (ch == 's'){drt = 'S';}
            
            if (ch == ' '){
                if (am_1 == "OFF"){am_1 = "ON"; u1=x+3; v1=y-1; draw_am(u1,v1);}
                else if (am_1 == "ON" && am_2 == "OFF"){am_2 = "ON"; u2=x+3; v2=y-1; draw_am(u2,v2);}
                else if (am_2 == "ON" && am_3 == "OFF"){am_3 = "ON"; u3=x+3; v3=y-1; draw_am(u3,v3);}
                else if (am_3 == "ON" && am_4 == "OFF"){am_4 = "ON"; u4=x+3; v4=y-1; draw_am(u4,v4);}
                else if (am_4 == "ON" && am_5 == "OFF"){am_5 = "ON"; u5=x+3; v5=y-1; draw_am(u5,v5);}
            }
            fflush(stdin);
        }    
        if (drt != 'S'){
            if (drt == 'L'&& x > 0){
                setcolor(0,0);erase_ship(x,y); setcolor(2,4); draw_ship(--x,y);Sleep(100);  
            }
            if (drt == 'R'&& x < 73){
                setcolor(0,0);erase_ship(x,y); setcolor(2,4); draw_ship(++x,y);Sleep(100); 
            }
        }
    setcolor(0,0);
    Sleep(50);
        if (am_1 == "ON"){ erase_am(u1,v1); v1 -= 1; if (v1 > 0) {draw_am(u1,v1);} else {am_1 = "OFF";}}
        if (am_2 == "ON"){ erase_am(u2,v2); v2 -= 1; if (v2 > 0) {draw_am(u2,v2);} else {am_2 = "OFF";}}
        if (am_3 == "ON"){ erase_am(u3,v3); v3 -= 1; if (v3 > 0) {draw_am(u3,v3);} else {am_3 = "OFF";}}
        if (am_4 == "ON"){ erase_am(u4,v4); v4 -= 1; if (v4 > 0) {draw_am(u4,v4);} else {am_4 = "OFF";}}
        if (am_5 == "ON"){ erase_am(u5,v5); v5 -= 1; if (v5 > 0) {draw_am(u5,v5);} else {am_5 = "OFF";}}   
    
    } while(ch != 'x');
    
    return 0;
}