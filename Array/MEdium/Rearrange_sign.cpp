#include<bits/stdc++.h>
using namespace std;
void rearrange_brute(int arr[],int n);
void rearrange_better(int arr[],int);
int main()
{ 
    int n;
    cout<<"ENter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rearrange_brute(arr,n);
    rearrange_better(arr,n);
}
void rearrange_brute(int arr[],int n)
{
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    int ans[n]={0};
    for(int i=0;i<pos.size();i++)
    {
        ans[2*i]=pos[i];
        ans[2*i+1]=neg[i];
    }
    cout<<"Array after REARRANGING:\n";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
void rearrange_better(int arr[],int n)
{
    int next_pos=0,next_neg=1;
    int ans[n]={0};
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            {
                ans[i]=arr[next_pos];
                next_pos+=2;
            }
        else{
            ans[i]=arr[next_neg];
            next_neg=next_neg+2;
        }
    }
    cout<<"\nUSIng Better approach:";

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}