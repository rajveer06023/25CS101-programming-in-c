#include <stdio.h>
//calculation of simple interest
int main() {
    float principal,rate,time;
    printf("enter principal");
    scanf(" %f", &principal);

    printf("enter the rate");
    scanf("%f", &rate);

    printf("enter the time");
    scanf("%f", &time);

    float si = (principal*rate*time)/100;
    printf("si is: %f", si);


    return 0;
}