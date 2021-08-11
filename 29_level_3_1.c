#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
    int i = 0;
    float Arrey[10];
    float sum = 0;

    while (i<10){
        printf("Enter student height: ");
        scanf("%f",&Arrey[i]);
        sum += Arrey[i];
        i += 1;
    }

    printf("\nmean of student height: %f",sum/10);
    return 0;
}