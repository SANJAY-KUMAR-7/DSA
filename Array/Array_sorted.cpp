#include<bits/stdc++.h>
using namespace std;
Is_sorted(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]) 
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"YES";
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
    Is_sorted(n,arr);
}