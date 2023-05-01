#include<bits/stdc++.h>
using namespace std;
find_missing_number(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n-1;j++) 
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Missing number is:"<<i;
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