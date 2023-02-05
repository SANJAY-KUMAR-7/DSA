#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"ENter a NUMBER:";
    cin>>n;
    int temp=n;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    cout<<n<<" Has "<<count<<"Digits";
}