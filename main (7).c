#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n",n);// If else
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
}
