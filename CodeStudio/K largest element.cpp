#include<algorithm>

void swap(int *val1 , int *val2)
{
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

int partition(vector<int> &a , int low , int high)
{
    int pivot = a[high];
    int i = low -1 ;
    for (int j = low ; j <= high - 1; j++ )
    {
        if(a[j] < pivot)
        {
            i++;
            swap(&a[i] , &a[j]);
        }
    }
    swap(&a[i+1] , &a[high]);
    return i+1 ;
}

void quicksort(vector<int> &a , int low, int high)
{
    if (low < high)
    {
        int pi = partition(a , low, high);
        quicksort(a , low ,pi-1 );
        quicksort(a, pi+1, high);
        
    }
}
vector<int> Klargest(vector<int> &a, int k, int n) {
    // Write your code here
    //sort(a.begin() , a.end());
    quicksort(a , 0 , n-1 );
    vector<int> data;
    for(int i = n-k; i < n ; i++)
    {
        data.push_back(a[i]);
    }
    return data;
}