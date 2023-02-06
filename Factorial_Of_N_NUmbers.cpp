#include<bits/stdc++.h>
using namespace std;
int factorial(int N,int fact){
    if(N<1) 
    return fact;
    factorial(N-1,fact*N);
}


int main()
{
        int N,fact=1;
    cout<<"Enter N:";
    cin>>N;
    cout<<"The factorial of "<<N<<" is:"<<factorial(N,fact);
}