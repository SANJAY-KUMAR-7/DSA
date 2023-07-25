#include<bits/stdc++.h>
using namespace std;
void recursion(int n)
{
    if(n<1)
        return;
    recursion(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    recursion(n);
return 0;
}