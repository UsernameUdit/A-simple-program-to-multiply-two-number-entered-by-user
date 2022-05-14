#include <stdio.h>
// a simple program to multiply two numbers entered by the user
int main()
{
    int a,b;
    printf("A program to multiply two number entered by you\n");
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("The product of a and b is %d",a*b);
    return 0;
}