class Solution {
public:
    bool isPalindrome(int x) {
        long long int num = x, sum = 0;
        
        if (x<0)
        {
            return false;
        }
        else
        {
            while(num>0)
            {
                int temp = num%10;
                sum = sum*10+temp;
                num = num/10;
                
            }
            
            if(sum == x)
            {
                return true;
            }
            return false;
            
        }
        
    }
};
