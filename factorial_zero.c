
#include <stdio.h>

int main()
{
    unsigned long int iter;
    scanf("%lu", &iter);
    for(int i = 0; i<iter; i++)
    {
        unsigned long int num, five = 1, sum = 0;
        scanf("%lu", &num);
        while(num>five)
        {
            five*=5;
            
            unsigned long int var = num/five;
            sum+=var;
            
            
        }
        printf("%lu\n", sum);
    }

    return 0;
}
