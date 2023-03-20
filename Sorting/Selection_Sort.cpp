#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"ENter size of sarray:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements into array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //selection sort
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }
    cout<<"After sorting:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}