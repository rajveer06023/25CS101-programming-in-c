#include<stdio.h>
//area of rectangle
int main() {
    int length, breadth;
    //user must be enter the length value
    printf("enter the length");
    scanf("%d", &length);


    //user must be enter the breadth vlue
    printf("enter the breadth");
    scanf("%d", &breadth);

    int area = length * breadth;
    //the value of length,breadth in meter
    printf("area is: %d", length*breadth );

    return 0;      
}

