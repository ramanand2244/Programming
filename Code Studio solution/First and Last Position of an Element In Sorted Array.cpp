pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int last = n-1;
    int flag1 = 0 , flag2 = 0;
    pair<int, int> data(-1, -1);
    for(int i = 0; i < n ; i++)
    { 
        if(arr[i] == k && flag1 == 0)
        {
             flag1 = 1;
            data.first = i;
        }
        if (arr[last-i] == k && flag2 == 0)
        {
            data.second= last-i;
            flag2 = 1;
        }
        if (flag1 == 1 && flag2 == 1) break;
    }
    return data;
}