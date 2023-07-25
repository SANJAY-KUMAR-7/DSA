#include<bits/stdc++.h>
using namespace std;
int fabo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else {
        return fabo(n-1)+fabo(n-2);
    }

}
int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<fabo(n);
return 0;
}