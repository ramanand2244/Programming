
#include <stdio.h>

int main()
{
    int iter;
    scanf("%d", &iter);
    
    for(int i = 0; i<iter; i++)
    {
        int num, rev_num = 0;
        scanf("%d", &num);
        while(num>0)
        {
            int val = num%10;
            rev_num = rev_num*10 + val;
            num /= 10;
            
        }
        printf("%d\n", rev_num);
    }
    return 0;
}
