#include<bits/stdc++.h>
using namespace std;
find_missing_number(int n,int arr[])
{
    int hash[n]={0};
    for(int i=1;i<n-1;i++)
    {
        hash[arr[i]]=1;
    }
    for(int i=1;i<n;i++)
    {
        if(hash[i]==0)
        cout<<"Missing value is:"<<i;
    }
}
int main()
{
    
    int N;
    cout<<"Enter N: ";
    cin>>N;
    int arr[N-1];
    for(int i = 0;i < N-1 ; i++)
    {
        cin>>arr[i];
    }
    find_missing_number(N,arr);

}