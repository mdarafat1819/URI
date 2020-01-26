#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    string str;
    while(getline(cin, str))
    {
        int i = 0, j = 0;
        while(str[i] != '\0')
        {
            if(str[i] != ' ')
            {
                if(!(j % 2)) str[i] = toupper(str[i]);
                else str[i] = tolower(str[i]);
                j++;
            }
            i++;
        }
        cout<<str<<endl;
    }

    return 0;
}
