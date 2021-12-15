
#include<iostream>


using namespace std;


void Insertion_Sort(int *arr, int n)
        {
                //int *arr1 = &arr;
                for( int i = 1; i < n; i++)
                {
                        int key = arr[i];
                        int j = i-1;
                        while(j>=0 && key<arr[j])
                        {
                                arr[j+1] = arr[j];
                                j-=1;
                        }
                        arr[j+1] = key;
                }
        }




int main()
{
        int arr[] = {10, 12, 16,4,5,2,89,78,13,1,65,23};
        int leng = sizeof(arr)/sizeof(arr[0]);
        Insertion_Sort(arr, leng);

        for ( int i = 0; i< leng; i++)
        {
                cout<<arr[i] <<" ";
        }
        return 0;
}

