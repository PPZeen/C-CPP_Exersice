#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){

    int x,y;
    printf("Enter your first number: ");
    scanf("%d", &x);
    printf("Enter your second number: ");
    scanf("%d",&y);

    printf("%d\n%d\n%d\n%d",x+y,x-y,x*y,x/y);

    return 0;
}