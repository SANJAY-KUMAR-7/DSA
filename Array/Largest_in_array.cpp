#include<bits/stdc++.h>
using namespace std;
int largest_element(int n,int arr[])
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
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
    int max=largest_element(n,arr);
    cout<<"MAxmimum number is:"<<max<<" ";
}