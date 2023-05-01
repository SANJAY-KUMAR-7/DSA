#include<bits/stdc++.h>
using namespace std;
remove_duplicate(int n,int arr[])
{
    set<int> check;
    for(int i=0;i<n;i++)
    {
        check.insert(arr[i]);
    }
    int index=0;
    for(auto it:check)
    {
        arr[index]=it;
        index++;
    }
    cout<<"Total Unique Elements are:"<<index<<endl;
    for(int i=0;i<index;i++)
    {
        cout<<arr[i]<<" ";
    }
}

better_method(int n,int arr[])
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
            {
                arr[i+1]=arr[j];
                i++;
            }
    }
    cout<<"There are "<<i+1<< " Unique elements";
}
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    remove_duplicate(n,arr);
    better_method(n,arr);
}