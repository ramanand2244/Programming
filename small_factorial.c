
#include<stdio.h>
int factorial(int n);
int main()
{
    int iter;
    scanf("%d", &iter);
    for(int i = 0; i<iter;i++)
    {
        int number;
        scanf("%d", &number);
        printf("%d\n", factorial(number));
    }
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 0;
    
    else if (n==1)
        return 1;
    else
        return n*factorial(n-1);
}
