class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int length = nums.size();
        int a = 0, b= 0;
        for(int i = 0; i<=length - 2; i++)
        {
            for(int j = i+1; j<=length-1; j++ )
            {
                
                if ((nums[i] + nums[j]) == target)
                {
                    a = i;
                    b = j;
                }
            }
        }
        return {a,b};
    }
};
