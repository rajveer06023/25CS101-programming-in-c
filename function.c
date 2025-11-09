// write a c program to check wheather a given number is even or odd.using user define function:

// #include<stdio.h>


// int my_function(int n);

// int main(){

//     int num;
//     printf("enter positive integer :");
//     scanf("%d", &num);

//     my_function(num);
    
//     return 0;
// }

// int my_function(int n){
//     if(n % 2 == 0)
//     printf("it is even number");
//     else 
//     printf("it is odd number");


//     return 0;
// }


//2nd case 

// #include<stdio.h>

// int my_function(int n);

// int main(){
//     int z,x;
//     z = my_function(x);


//     if(z % 2 == 0)
//     printf("it is even number");
//     else
//     printf("it is odd number");

    
//     return 0;
// }

// int my_function(int n){
//     // int n;
//     printf("enter positive number :");
//     scanf("%d", &n);

//     return n;

//  }

 //third case of program

 #include<stdio.h>

 void my_function();

 int main(){

    my_function();

    return 0;
 }

 void my_function(){
    int a;
    printf("enter positive integer :");
    scanf("%d", &a);

    if(a % 2 == 0)
    printf("it is even number");
    else 
    printf("it is odd number");

 }














































