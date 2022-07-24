void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int l = m + 1, r = arr.size()-1, temp; 
    while(l<=r) { // reversing the left and right element
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
