#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "leetcode";
    unordered_map<char, int> m;
    for(int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    char a;
    int b;
    cout<<"first second \n";

    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<"\t"<<i->second<<endl;
    }

    for(auto& i : m)
    {
        if(i.second == 1)
        {
            b = i.second;
            a = i.first;
            break;            
        }
    }
    int x = -1;
    for(int i = 0; i < s.length(); i++)
        {
            if(a == s[i])
            {
                x = i;
                break;
            }
        }
    cout<< "single : "<<x<<endl;
    cout<< "a : "<<a<<endl;
    cout<< "b : "<<b<<endl;
    return 0;
}