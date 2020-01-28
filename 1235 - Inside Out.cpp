#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string orginalOrder(string str)
{
    string result;
    int len = str.length();
    int hlen = len / 2;
    for(int i = hlen - 1; i >= 0; i--)
        result.push_back(str[i]);
    for(int i = len - 1; i >= hlen; i--)
        result.push_back(str[i]);
    return result;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin, str);
        cout<<orginalOrder(str)<<endl;
    }
    return 0;
}
