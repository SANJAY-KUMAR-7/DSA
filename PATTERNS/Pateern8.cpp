#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=9-2*i;j++)
        {
            cout<<"*";
        }
                for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}