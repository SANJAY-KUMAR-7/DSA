#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int N,s=0;
    cout<<"Enter N: ";
    cin>>N;
    int arr[N-1];
    for(int i = 0;i < N-1 ; i++)
    {
        cin>>arr[i];
    }
    int sum=N*(N+1)/2;
    for(int i=0;i<N-1;i++)
    {
        s+=arr[i];
    }

    cout<<"Missing number is:"<<sum-s;
}