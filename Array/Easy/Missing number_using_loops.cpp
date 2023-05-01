#include<bits/stdc++.h>
using namespace std;
find_missing_number(int n,int arr[])
{
    for(int i=0;i<N+1;i++)
    {
        int flag=0;
        for(int j=0,j<N-1;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<i<<" ";
    }
}
int main()
{
    
    int N;
    cout<<"Enter N: ";
    cin>>N;
    int arr[N-1];
    for(int i = 0;i < N ; i++)
    {
        cin>>arr[i];
    }
    find_missing_number(n,arr);

}