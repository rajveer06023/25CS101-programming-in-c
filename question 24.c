#include<stdio.h>
int main()
{
    int choices,result = 0;
    int num,i,rem,fact=1,sum = 0;
    printf("Menu are :\n");
    printf("a. Finding factorial of positive integer :\n");
    printf("b. Sum of digits of a positive integer :\n");
    printf("c. Reversing the digits of a number :\n");
    printf("Enter the choice :");
    scanf("%d", &choices);
    if(choices==1||choices==2||choices==3)
    {
        switch (choices)
        {
            case 1:
            printf("Enter the number :");
            scanf("%d", &num);
            for(i=num;i>=1;i--)
            {
                fact = fact * i;
            }
            printf("The factorial is : %d", fact);
            case 2:
            printf("Enter the number :");
            scanf("%d",&num);
            while(num != 0)
            {
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            printf("The sum of digits is :%d", sum);
            case 3:
            printf("Enter the number :");
            scanf("%d", &num);
            while(num != 0)
            {
                rem = num % 10;
                result = (result*10) + rem;
                num = num / 10;
            }
            printf("The reverse number is :%d", result);
        }
    }
    else
    printf("This is not valid menu :");
    
    return 0;
}