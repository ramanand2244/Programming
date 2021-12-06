#include <stdio.h>
#include<math.h>

int main()
{
    int iter;
    scanf("%d", &iter);
    for(int i =0; i<iter; i++)
    {
        int num;
        scanf("%d", &num);
        int sqrt_num = (int) sqrt(num);
        printf("%d\n", sqrt_num);
    }

    return 0;
}
