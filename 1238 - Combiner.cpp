#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str1, str2, result;
        cin>>str1>>str2;
        int len1 = str1.length(), i = 0;
        int len2 = str2.length();
        while(1)
        {
            if(len1 <= 0 && len2 <= 0) break;
            if(len1 > 0) result.push_back(str1[i]);
            if(len2 > 0) result.push_back(str2[i]);
            len1--;
            len2--;
            i++;
        }
        cout<<result<<endl;
    }

    return 0;
}
