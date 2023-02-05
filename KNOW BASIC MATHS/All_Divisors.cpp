#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";
    }
}