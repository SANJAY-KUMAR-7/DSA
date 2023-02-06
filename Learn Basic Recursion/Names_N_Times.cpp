#include<bits/stdc++.h>
using namespace std;

void display_name(string name,int n,int N){
    if(n>N)
        return;
    cout<<name<<endl;
    display_name(name,n+1,N);
}

int main()
{
    string name;
    cout<<"Enter Name:";
    cin>>name;
    int N;
    cout<<"Enter N:";
   cin>>N;
    display_name(name,1,N);
}