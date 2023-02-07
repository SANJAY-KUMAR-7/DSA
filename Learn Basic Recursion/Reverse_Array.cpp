#include<bits/stdc++.h>
using namespace std;
void method2(int array[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
}

int main()
{
int n;
cout<<"ENter size of array:";
cin>>n;
int array[n],array2[n];
cout<<"ENter values into array:";
for(int i =0;i<n;i++)
{
    cin>>array[i];
}
/*Method 1 using 2nd array
for(int i =0;i<n;i++)
{
array2[i]=array[n-i-1];
}
for(int i =0;i<n;i++){
    cout<<array2[i]<<" ";
}*/
 
 //Method 2 
 method2(array,n);
}