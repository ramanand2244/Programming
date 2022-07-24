class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int size = arr.size();
        int minimum = INT_MAX;
        int profit = 0;
        for (int i = 0; i<size ; i++)
        {
            if (minimum > arr[i]) 
            {
                minimum = arr[i];
            }
            int data = arr[i] - minimum;
            if (data > profit) profit = data;
            
        }
        return profit;
        
    }
};