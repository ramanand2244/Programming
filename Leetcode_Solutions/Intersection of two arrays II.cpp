class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> data;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        int size1 = nums1.size();
        int size2 = nums2.size();
       // int size = size1 >= size2 ? size1 : size2;
        int min = 0, max = 0; 
        while(min < size1 && max < size2) {
            if(nums1[min] > nums2[max]) {
                max++;
            }
            else if (nums1[min] < nums2[max]) {
                min++;
            }
            else if (nums1[min] == nums2[max]) {
                data.push_back(nums1[min]);
                min++;
                max++;
            }
        }
     
        return data;
    }
};