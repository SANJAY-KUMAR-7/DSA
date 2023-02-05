#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,check=0;
    cout<<"ENter a NUMBER:";
    cin>>n;
    int temp=n;
    while(temp>0)
    {
        int last=temp%10;
        check+=last*last*last;
        temp/=10;
    }

    if(check==n)
       cout<<n<<" IS a Armstrong ";
    else
    cout<<n<<" IS NOT a Armstrong";
}