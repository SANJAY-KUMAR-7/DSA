#include<bits/stdc++.h>
using namespace std;
int add(int N,int sum)
{
    if(N<1)
        return sum;
    add(N-1,sum+N);

}

int main()
{
    int N,sum=0;
    cout<<"Enter N:";
    cin>>N;
    cout<<"The sum of "<<N<<" Natural NUmbers is:"<<add(N,sum);
}