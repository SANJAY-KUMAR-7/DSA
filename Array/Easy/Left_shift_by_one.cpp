#include<bits/stdc++.h>
using namespace std;
left_shift(int n,int arr[])
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    left_shift(n,arr);
    cout<<"After rotation:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}