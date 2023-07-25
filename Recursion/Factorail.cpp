#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Factorail of "<<n<<" is:"<<fact(n);
return 0;
}