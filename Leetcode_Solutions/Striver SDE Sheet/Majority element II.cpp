#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    map<int,int> mp;
    vector<int> vec;
    int size = arr.size()/3;
    for(int i : arr)
    {
        if(mp[i]) mp[i]+=1;
        else mp[i] = 1;
    }
    
    int mp_size = mp.size();
    for(auto data : mp)
    {
        if (data.second > size) vec.push_back(data.first);      
    }
    return vec;
}