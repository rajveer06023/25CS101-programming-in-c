#include<stdio.h>
//conversion of tempreature ferhanite to celsius
int main(){
    float ferhanite;
    printf("enter the tempreature in ferhanite");
    scanf("%f", &ferhanite);

    printf("tempreature in celsius is:%f", 5*(ferhanite - 32)/9);

    return 0;


}