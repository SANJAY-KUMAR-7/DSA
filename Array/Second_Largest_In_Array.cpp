#include<bits/stdc++.h>
using namespace std;

int second_largest_element(int n,int arr[])
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<"max"<<max;
    int second_maxi=-1;
    for (int i=0;i<n;i++){
       if(arr[i]>second_maxi && arr[i]!=max)
            second_maxi=arr[i];
    }
    return second_maxi;
}
better_second_largest(int n,int arr[])
{
    int largest=arr[0],second_largest=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
    }
    cout<<"Second LArgest is:"<<second_largest;
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
    int second_max=second_largest_element(n,arr);
    cout<<" Second MAxmimum number is:"<<second_max<<" ";
    better_second_largest(n,arr);

}