#include<bits/stdc++.h>
using namespace std;
int maxmimum_length(int n,int arr[],int k)
{
    int left=0,right=0;
    long long sum=arr[0];
    int maxLength;
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=arr[left];
            left++;
        }
        if(sum==k)
        {
            maxLength=max(maxLength,right-left+1);
        }
         right++;
        if(right<n)
            sum+=arr[right];
    }
    
        return maxLength;
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
    int k;
    cout<<"Enter K:";
    cin>>k;
    int length=maxmimum_length(n,arr,k);
    cout<<"MAx length:"<<length;
}