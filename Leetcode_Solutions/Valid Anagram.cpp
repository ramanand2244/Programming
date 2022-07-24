class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.size(),
            size2 = t.size(),
            arr[26] = {0};
        if(size1 != size2) return 0;
        for(auto val : s) {
            arr[val - 97] +=1;
        }
        for(auto val : t) {
            arr[val - 97] -= 1;
        }
        for (int i =0; i<26; i++) {
            if(arr[i] != 0) return 0;
        }
        return 1;
        
    }
};