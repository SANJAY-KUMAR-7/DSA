#include<bits/stdc++.h>
using namespace std;
bubble_sort (int n,int arr[])
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elemenets into array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(n,arr);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}