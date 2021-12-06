#include <stdio.h>

int main()
{
    int iter;
    scanf("%d", &iter);
    for(int i =0;i<iter; i++)
    {
        int num, occur = 0;
        scanf("%d", &num);
        while(num>0)
        {
            int val = num%10;
            num /= 10;
            if (val == 4) occur++;
        }
        printf("%d\n", occur);
    }
    return 0;
}
