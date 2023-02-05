#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"ENter a NUMBER:";
    cin>>n;
    int temp=n;
    while(temp>0)
    {
        int last=temp%10;
        rev=(rev*10)+last;
        temp/=10;
    }
    cout<<"Reverse of "<<n<<"is "<<rev;
}