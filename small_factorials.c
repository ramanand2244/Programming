#include<stdio.h>

//int factorial(int n);

int main()
{
    int iter;
    scanf("%d", &iter);
    for(int i = 0; i<iter;i++)
    {
        int number;
        scanf("%d", &number);
        //printf("%d\n", factorial(number));
        
        if (number == 1)
            printf("%d\n", 1);
        else
        {
            int sum = 1;
            while(number>0)
            {
                sum*=number;
                number--;
                
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
