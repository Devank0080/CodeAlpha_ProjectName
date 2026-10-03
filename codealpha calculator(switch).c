#include<stdio.h>

int main()
{
    float a,b;
    int c;
    printf("Enter 1st number:");
    scanf("%f",&a);

    printf("Enter 2nd number:");
    scanf("%f",&b);

    printf("***** SIMPLE CALCULATOR ******\n");

    printf("enter your choice\n");

    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");

    printf("Enter your choice\n");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        printf("addition=%.2f",a+b);
        break;
    case 2:
        printf("subtraction=%.2f",a-b);
        break;
    case 3:
        printf("multiplication=%.2f",a*b);
        break;
    case 4:
        if(b==0)
        {
          printf("division by zero is not allowed");
        }
        else
        {
          printf("division=%.2f",a/b);
        }
        break;
    default:
        printf("invalid choice");
        break;
    }
    return 0;
}
