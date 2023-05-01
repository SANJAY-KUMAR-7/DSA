#include<bits/stdc++.h>
using namespace std;
maximum_consecutive_ones(int n,int arr[])
{
    int count=0;
    int maxi;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count+=1;
            maxi=max(maxi,count);
        }
        else 
        count=0;
    }
    cout<<maxi;
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
    maximum_consecutive_ones(n,arr);
    return 0;

}