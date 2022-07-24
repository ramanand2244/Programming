#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int cnt = 0;
    int val = 0;
    for (int i = 0; i<n; i++)
    {
        if (cnt == 0) val = arr[i];
        if (val == arr[i])    cnt+=1;
        else cnt -=1;           
    }
    cnt = 0;
    for (int i = 0; i<n; i++)
    {
        if(arr[i] == val)
        {
             cnt++;   
        }
    }
    if (cnt>n/2) return val;
    return -1;
}