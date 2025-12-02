// //write a c program to find the length of the given strings :
// #include<stdio.h>
// void main()
// {
//     int i,length =0;
//     char str[50];
//     printf("Enter a string:\n");
//     scanf("%s", str);
    

//     for(i=0; str[i] != '\0';i++ )
//     {
//         length++;
//     }

//     printf("%d\n", length);
//     puts(str);


// }

//write a c progrma to count the number of words in a given sentence :
// #include<stdio.h>
// void main()
// {
//     char str[51];
//     printf("Enter the string :\n");
//     fgets(str,51,stdin);

//     int i,length = 1;
//     for(i=0;str[i] != '\0';i++)
//     {
//         if(str[i] == ' ')
//         length++;

//     }
//     length = length - 1;

//     printf("The numbers of words is = %d", length);






// }
 
//Write a c program to find the number of vowels and counstant in a words :
// #include<stdio.h>
// void main()
// {
//     char str[51];
//     printf("Enter a string :");
//     fgets(str,51,stdin);

//     int i,novowels=0,consnant=0,letter=0;
//     for(i=0;str[i] != '\0'; i++)
//     {
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
//         {
         
         
//             novowels++;


//         }

//         letter++;


//     }

//     letter = letter - 1;
//     consnant = letter - novowels;

//     printf("The number of vowels is =%d\n", novowels);
//     printf("The number of constent is =%d\n",consnant);





// }

//Write a c program to compare two strings are equal or not :
// #include<stdio.h>
// void main()
// {
//     char str[21],str1[21];
//     int length =0,i,length1=0,count = 0;

//     printf("Enter the first string :\n");
//     fgets(str,21,stdin);

//     printf("Enter the second strings :\n");
//     fgets(str1,21,stdin);

//     for(i=0;str[i] != '\0';i++)
//     {
//         length++;

//     }
//     for(i=0;str1[i] != '\0';i++)
//     {
//         length1++;

//     }

//     if(length != length1)
//     printf("Not same :\n");

//     else
//     {
//         for(i=0;str[i] != '\0' || str1[i] != '\0';i++)
//         {
//             if(str[i] != str1[i])
//             {   
                
//                 count++;
//                 break;
//             }
//         }

//         if(count == 0)
//         printf(" same !");

//         else
//         printf(" Not Same !");


//     }

    

// }

//write a c program to reverse a given string :
// #include<stdio.h>
// void main(){
//     int i,length = 0;
//     char str[21];
//     printf("Enter the strings :\n");
//     fgets(str,21,stdin);

//     for(i=0;str[i] != 0; i++)
//     {
//         length++;
//     }

//     for(i = length; i >= 0;i--)
//     {
//         printf("%c", str[i]);
//     }

    


// }


//write a c program to merge two strings :
#include<stdio.h>
void main(){
    int i,index = 0,length = 0,length1=0;
    char str[21],str1[21];
    printf("Enter first strings :\n");
    fgets(str,21,stdin);

    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    

    printf("Enter second strings :\n");
    fgets(str1,21,stdin);

    for(i=0;str1[i]!='\0';i++)
    {
        length1++;
    }

    char str2[42];
    for(i=0;i < length;i++)
    {
        str2[index] = str[i];
        index++;
    }
     for(i=0;i < length1;i++)
    {
        str2[index] = str1[i];
        index++;
    }

    printf("%s", str2);





}