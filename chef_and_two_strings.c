
#include <stdio.h>
#include <string.h>
int main()
{
    int iter;
    scanf("%d", &iter);
    for (int i = 0; i<iter; i++)
    {
        char str1[100];
        char str2[100];
        scanf("%s\n%s", str1, str2);
        int len = 0, j = 0;
        for (j = 0; str1[j] != '\0'; ++j);
        len = j;
        int min = 0, max = 0;
        for(int k = 0; k<len; k++)
        {
            if( (str1[k] == '?') && (str2[k] == '?')) max++;
            else if((str1[k] == '?') || (str2[k] == '?')) 
            {
                max++;
                
            }
            else if (str1[k] != str2[k])
            {
                min++;
                max++;
            }
            
        }
        printf("%d %d\n", min , max);
        
    }

    return 0;
}
