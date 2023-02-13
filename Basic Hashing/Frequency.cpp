#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter values inside array:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[array[i]]+=1;
    }

    int q;
    cout<<"Enter size to search:"; 
    cin>>q;

    while(q--){
        int w;
        cin>>w;
        cout<<hash[w];
    }
}