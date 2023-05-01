#include<bits/stdc++.h>
using namespace std;
left_shift_by_D(int n,int arr[],int d)
{
    d=d%n;

    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }
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
    int d;
    cout<<"ENter value of D:";
    cin>>d;
    left_shift_by_D(n,arr,d);
    cout<<"After rotation:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}