#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string shiftedThreePositions(string str)
{
    for(int i = 0; i < str.length(); i++)
        {
            if(tolower(str[i]) >= 'a'  && tolower(str[i]) <= 'z')
            str[i] = str[i] + 3;
        }
    return str;
}
string stringReverse(string str)
{
    int len = str.length();
    for(int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}
string movedOnePosition(string str)
{
    int len = str.length() / 2;
    for(int i = len; i < str.length(); i++)
            str[i] = str[i] - 1;
    return str;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
      cin>>ws;
      string str;
      getline(cin, str);
      str = shiftedThreePositions(str);
      str = stringReverse(str);
      str = movedOnePosition(str);
      cout<<str<<endl;
    }
    return 0;
}
