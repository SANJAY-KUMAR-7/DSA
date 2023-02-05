#include<bits/stdc++.h>
using namespace std;
int main()
{

    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i+j>=5)
                cout<<"*";
            else    
                cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
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