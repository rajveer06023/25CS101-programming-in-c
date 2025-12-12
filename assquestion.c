// //Define a structure called complex to represent a number with real and imaginory part.
//  write a c program to add substract and  multiply two complex number.
#include<stdio.h>
struct complex 
{
    
    int realno;
    int imageno;

}c1,c2;

void main()
{
    printf("Enter the real part and imagenory part :");
    scanf("%d%d",&c1.realno,&c1.imageno);
    
    printf("Enter the real part and imagenory part :");
    scanf("%d%d",&c2.realno,&c2.imageno);

    printf("Add = %d+i%d\n",c1.realno,c1.imageno);
    printf("Add = %d+i%d\n",c2.realno,c2.imageno);

    
    printf("substract = %d-i%d\n",c1.realno,c1.imageno);
    printf("substract = %d-i%d\n",c2.realno,c2.imageno);

    



   

}


//Define a structure called time with three members hours,minutes and seceonds. write a c prigram to add two different time and display them :
#include<stdio.h>
struct time
{
    int sec,minute,hour;    
};
int main(void)
{
    struct time t[2];
    int i;
    for(i=0;i<2;i++)
    {

        printf("Enter the seconds :");
        scanf("%d", &t[i].sec);

        printf("Enter the minutes :");
        scanf("%d", &t[i].minute);

        printf("Enter the hours :");
        scanf("%d", &t[i].hour);

    }

    int quotient,quotientm;


    for(i=0;i<2;i++)
    {
        if(t[i].sec >= 60 )
        {

            quotient = t[i].sec / 60;
            t[i].sec = t[i].sec % 60;

            t[i].minute += quotient;

        }

        if(t[i].minute >= 60 )
        {
            quotientm = t[i].minute / 60;
            t[i].minute = t[i].minute % 60;

            t[i].hour += quotientm;



        }
    


    }

    int sec,minute,hour,q1,q2;

    

    sec = t[0].sec + t[1].sec;
    minute = t[0].minute + t[1].minute;
    hour = t[0].hour + t[1].hour;

    if(sec >= 60)
    {
        q1 = sec / 60;
        sec = sec % 60;

        minute += q1;
        if(minute >= 60)
        {
            q2 = minute / 60;
            minute = minute % 60;

            hour += q2;

        }
    }


    
   
    printf("After adding the time will be :\n");

    printf("%d hours : %d minutes : %d seconds :", hour,minute,sec);
 
    




    return 0;

}



// Write a c program to find the distance between two points :

#include<stdio.h>
#include<math.h>
struct point
{

    float xaxis;
    float yaxis;

}p1,p2;

int main(void)
{


    printf("Enter the coordinates of point :");
    scanf("%f", &p1.xaxis);
    printf("Enter the y-coordinates :");
    scanf("%f", &p1.yaxis);

    printf("Enter the coordinates of point :");
    scanf("%f", &p2.xaxis);
    printf("Enter the y-coordinates :");
    scanf("%f", &p2.yaxis);


    float distance = sqrt(pow((p2.xaxis - p1.xaxis),2) + pow((p2.yaxis - p1.yaxis),2) );
    printf("Distance between two points = %.2f\n", distance);



    return 0;
}

//write a c program to store n number of students :
#include<stdio.h>
struct student 
{
    char name[21];
    int regno;
    char branch[21];
    int sec;


};
int main(void)
{
    int size;
    printf("Enter the number of the students :");
    scanf("%d", &size);
    struct student s[size];

    int i;
    char nam,bra;
    for(i=0;i<size;i++)
    {
        printf("Enter the name of the students :");
        scanf("%s",&s[i].name);

        printf("Enter the regestration number :");
        scanf("%d",&s[i].regno);

        printf("Enter the branch of the student :");
        scanf("%s",&s[i].branch);



        printf("Enter the section of the student :");
        scanf("%d",&s[i].sec);


    }



}

