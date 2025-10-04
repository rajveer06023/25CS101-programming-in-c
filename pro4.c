#include<stdio.h>

int main(){
    int number;
    printf("enter an integer:");
    scanf("%d", &number);

    if (number > 0){
        printf("it is a positive number\n");
    }
    //if first statement is wrong then check other
    else if (number < 0){
        printf("it is a negative number\n");
    }
    else{
        printf("it is a zero\n");
    } 


    return 0;
}