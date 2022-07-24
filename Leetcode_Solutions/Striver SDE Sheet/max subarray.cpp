class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int max1 = nums[0];
        int size = nums.size();
        for (int i = 0; i < size ; i++)
        {  
            sum += nums[i];
            if (sum > max1) max1 = sum;
             
            if (sum < 0) sum = 0;
        }
        return max1;
    }
};