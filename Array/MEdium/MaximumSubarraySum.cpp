#include<bits/stdc++.h>
using namespace std;
int brute_approach(vector<int>);
int better_approach(vector<int>);
int kandane_approach(vector<int>);
int main()
{
    int n;
    cout<<"ENter size:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {   
        int arr;
        cin>>arr;
        v.push_back(arr);
    }
    cout<<"Maximum sum using brute force:"<<brute_approach(v)<<endl;
    cout<<"Maximum sum using better :"<<better_approach(v)<<endl;
    cout<<"Maximum sum using kandane:"<<kandane_approach(v)<<endl;

    return 0;
}
int brute_approach(vector<int> v)
{
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i;j<v.size();j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=v[k];
            }
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int better_approach(vector<int> v)
{
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        int sum=0;
        for(int j=i;j<v.size();j++)
        {
            sum+=v[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int kandane_approach(vector<int> v)
{
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0)
            sum=0;
    }
    return maxi;
}