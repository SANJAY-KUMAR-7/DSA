#include<bits/stdc++.h>
using namespace std;
void recursion(int n)
{
    if(n==0)
        return;
    cout<<n<<endl;
    recursion(n-1);
}
int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    recursion(n);
return 0;
}