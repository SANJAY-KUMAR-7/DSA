#include<bits/stdc++.h>
using namespace std;
void display(int N){
    if(N<1)
        return;
    cout<<N<<" ";
    N--;
    display(N);
}

int main()
{
    int N;
    cout<<"Enter N:";
    cin>>N;
    display(N);
}