#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n",n);// If 
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even",n);
    }
    if(n%2!=0)
    {
        printf("%d is odd",n);
    }
}
