#include<bits/stdc++.h>
using namespace std;
void fabonaci(int n){
    int a=0,b=1;
    if(n<=0)
        cout<<a;
    else if(n==1)   
        cout<<a;
    else if(n==2)
        cout<<a<<" "<<b;
    else{
        cout<<a<<" "<<b;
        for(int i=1;i<=n-2;i++)
        {
            int c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
    
    
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    fabonaci(n);
}