#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    while(1)
    {
        char d;
        string n, result, finalresult;
        cin>>d>>n;
        if(d == '0' && n == "0") break;
        for(int i = 0; i < n.length(); i++)
        {
            if(n[i] == d) continue;
            result.push_back(n[i]);
        }
        int i = 0;
        while(result[i] == '0') i++;
        for(int j = i; j < result.length(); j++)
            finalresult.push_back(result[j]);
        if(i == result.length()) cout<<"0"<<endl;
        else cout<<finalresult<<endl;
    }

    return 0;
}
