class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int size = arr.size();
        int profit = 0;
        for (int i = 0; i < size - 1; i++ )
        {
            int max_val = *max_element(arr.begin() + i + 1 , arr.end());

                int val = max_val - arr[i];
                profit = val > 0 && val > profit ? val : profit; 
            
        }
        return profit;
    }
};