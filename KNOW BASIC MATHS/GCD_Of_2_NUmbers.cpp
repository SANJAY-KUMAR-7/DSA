#include<bits/stdc++.h>
using namespace std;
int main()
{
int num1,num2,gcd=1;
cout<<"ENter 2 numbers:";
cin>>num1>>num2;
int max=num1;

for(int i=1;i<=min(num1,num2);i++)
{
    if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
}
cout<<"GCD of "<<num1<<","<<num2<<"is:"<<gcd;
}