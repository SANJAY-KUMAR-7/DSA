#include<bits/stdc++.h>
using namespace std;
void display(int n,int N){
    if(n>N)
        return;
    cout<<n<<" ";
    n++;
    display(n,N);
}
int main()
{
    int N;
    cout<<"Enter N:";
    cin>>N;
    display(1,N);
}