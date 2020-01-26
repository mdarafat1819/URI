#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int value[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t;
    cin>>t;
    while(t--)
    {
        int led = 0;
        cin>>ws;
        string str;
        cin>>str;
        for(int i = 0; str[i] != '\0'; i++)
           {
               int idx = str[i] - '0';
               led = led + value[idx];
           }
        cout<<led<<" leds"<<endl;
    }
    return 0;
}
