#include<bits/stdc++.h>
using namespace std;
two_sum_check(int n,int arr[],int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"Yes";
                break;
            }
        }
    }    
}
int main()
{
    int n;
    cout<<"Enter N:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Target:";
    cin>>target;

    two_sum_check(n,arr,target);
}