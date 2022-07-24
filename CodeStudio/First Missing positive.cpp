#include <bits/stdc++.h>

int firstMissing(int arr[], int n)
{
    // Write your code here.
    int i = 0;
   
    sort(arr, arr + n);
    while(arr[i] <= 0) i++;
    
    if(arr[i] != 1) return 1;
    for(i; i<n-1; i++) {
        if(arr[i+1] == arr[i] + 1) continue;
        else return arr[i] + 1;
    }
    return arr[n-1] + 1;
}