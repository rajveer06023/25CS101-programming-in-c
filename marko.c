//   1  function with no argument and no return value:
//to find the largest of three given number:
// #include<stdio.h>

// void largest();


// int main(void){

//     largest();

//     return 0;
// }

// void largest(){
//     int a, b, c, i;
//     printf("enter three number :");
//     scanf("%d%d%d", &a,&b,&c);

//     i = a;
//     if (b > i)
//     i = b;
//     if (c > i)
//     i =   c;
//     printf("largest = %d\n", i);

// }

//  2  function with argument and no return value:

// #include<stdio.h>

// void largest (int a,int b,int c);

// int main(){

//     int x,y,z;

//     printf("enter the three number :");
//     scanf("%d%d%d", &x,&y,&z);
//     largest(x, y, z);



//     return 0;
// }

// void largest(int a, int b, int c)
// {

//     int i;
//     i = a;
//     if(b > i )
//     i = b;
//     if (c > i)
//     i = c;
//     printf("largest = %d\n",i );


// }

//    3   function with no argunment and but with return value;

#include<stdio.h>
int largest(void);

int main(){

    int larg;

    larg = largest();
    printf("largest number is = %d", larg);

    return 0;
}

int largest(void)
{
    int a, b, c, i;
    printf("enter the three number :");
    scanf("%d%d%d", &a, &b, &c);

    i = a; 
    if(b > i)
    i = b;
    if(c > i)
    i = c;

    return i;

}

//  4  function with argunment and return value;

// #include<stdio.h>
// int largest(int a, int b, int c);

// int main(){

//     int a, b, c,large;

//     printf("enter the three number :");
//     scanf("%d%d%d", &a, &b, &c);

//     large = largest( a , b , c);

//     printf("largest number is = %d", large);




//     return 0;
// }
// int largest(int a, int b, int c)
// {
//     int i;
//     i = a;
//     if(b > i)
//     i = b;
//     if(c > i )
//     i = c;

//     return i;
// }