#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* int arr[]={1,2,3,4,5,6,1,1,1,2,5};
    map<int,int> mpp;
    for(int i=0;i<11;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"-->"<<it.second<<endl;
    }
*/
        set<int> s={1,2,3,4,5,6,7,9};
        int x;
        cin>>x;
                auto it=s.find(x); 
                cout<<*it;
                if(x==*it)
                    cout<<"HI";
            
}