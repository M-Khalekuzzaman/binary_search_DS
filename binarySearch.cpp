#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *arr,int value,int low,int high)
{
    if(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == value)
        {
            return mid;
        }
        else if(value > arr[mid])
        {
            binarySearch(arr,value,mid+1,high);
        }
        else
        {
            binarySearch(arr,value,low,mid-1);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int size;
    cin>>size;
    int *arr = new int[size] {0};
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    //sort(arr,arr+size);
    int value;
    cout<<"Do you want to search value : ";
    cin>>value;
    int pos = binarySearch(arr,value,0,size-1);
    if(pos == -1)
    {
        cout<<"Not Found !!!!"<<endl;
    }
    else
    {
        cout<<"Position number : "<<pos+1<<endl;
    }





    return 0;
}
