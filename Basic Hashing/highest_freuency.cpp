#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int k=1;

    while(k--){
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[array[i]]+=1;
        }
          int max=0;
        for(auto it:mpp)
        {
            if(max<it.second)   
                max=it.second;
             
        }
        cout<<max;
    }
    return 0;
}