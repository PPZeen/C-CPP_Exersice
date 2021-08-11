#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){

    float x,y;
    printf("Enter your first number: ");
    scanf("%f", &x);
    printf("Enter your second number: ");
    scanf("%f",&y);

    printf("%f %f %f %f",x+y,x-y,x*y,x/y);

    return 0;
}