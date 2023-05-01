#include<bits/stdc++.h>
using namespace std;
int find_first_zero(int n,int arr[])
{
    int k=-1;
    for(int i = 0;i < n ; i++)
    {
        if(arr[i]==0)
        {
            k=i;
            return k;
    }
    }
    return k;
}
remove_zero(int n,int arr[],int j)
{
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
        else
        i++;
    }
}
int main()
{
     int n;
     cout<<"ENter size:";
    cin>>n;
   
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int first=find_first_zero(n,arr);

    remove_zero(n,arr,first);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}