#include<stdio.h>
#include<math.h>
int main()
{
    int iter;
    scanf("%d", &iter);
    for(int i = 0; i<iter; i++)
    {
        int number, sum = 0, len;
        scanf("%d", &number);
        len = (int)log10(number); 
        sum = (int)((number%10) + (number/pow(10, len))) ;
        printf("%d\n", sum);
    }
    return 0;
}
