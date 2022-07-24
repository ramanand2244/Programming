
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    // Write your code here
    long long m = 1000000007;
    vector<int> val;
    vector<int> sum(n+1);
    sum[0] = 0;
    for(long long i=0;i<n;i++){
        sum[i+1] = (sum[i]%m+arr[i]%m)%m;
    }
    for(int i = 0; i< q; i++) {
        long long left = queries[i][0];
        long long right = queries[i][1];
        long long sum1 = 0;
        left--;
         sum1= (sum[right%n]-sum[left%n]+((sum[n]*((right/n - left/n)%m))))%m; // calculationg the final sum
         val.push_back((sum1+m)%m);
    }
    return val;
}