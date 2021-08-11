#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
    float sum = 0;
    float x[10];

    for (int i=0; i<10; i++){
        printf("Enter student height: ");
        scanf("%f",&x[i]);
        sum += x[i];
    }
    
    printf("\nmean of student height: %f",sum/10);
    return 0;
}