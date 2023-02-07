#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string s)
{
    string str="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
                if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
                {
                    if(s[i]>='A' && s[i]<='Z')
                    {
                        str+=tolower(s[i]);
                    }
                    else
                    str+=s[i];
                }
        }
        for(int i=0;i<(str.size());i++){
            if(str[i]!=str[str.size()-i-1]) 
            return false;
        }
        return true;

}

int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    cout<<is_palindrome(s);
}