#include<bits/stdc++.h>
using namespace std;
bool check_prime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)  
        return false;
        else
        return true;
    }
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    bool check=check_prime(n);
    if(check==true)
        cout<<"YES,"<<n<<" Is a PRIME NUMBER";
        else
        cout<<"NO,"<<n<<" Is a NOT PRIME NUMBER";
}