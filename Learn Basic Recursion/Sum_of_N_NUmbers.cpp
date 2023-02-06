#include<bits/stdc++.h>
using namespace std;
int total=0;
int sum(int n,int N)
{
    if(n>N)
        return 0;
total+=sum(n+1,N);

}

int main()
{
    int N;
    cout<<"Enter N:";
    cin>>N;
    cout<<"The sum of "<<N<<" Natural NUmbers is:"<<sum(1,N);
}