#include <iostream>

using namespace std;

int compare(string str1, int clen1, string str2, int clen2)
{
    int res = 0, len1, len2;
    len1 = str1.length();
    len2 = str2.length();
    for(int i = clen1, j = clen2; i < len1, j < len2; i++, j++ )
    {
        if(str1[i] == str2[j]) res++;
        if(str1[i] != str2[j]) return res;
    }
    return res;
}

int main()
{
    string str1, str2;
    while(getline(cin, str1) && getline(cin, str2))
    {
        int mx = 0;
        for(int i = 0; str1[i] != '\0'; i++)
            for(int j = 0; str2[j] != '\0'; j++)
                if(str1[i] == str2[j])
                {
                    int value = compare(str1, i, str2, j);
                    mx = max(value, mx);
                }
        cout<<mx<<endl;
    }

    return 0;
}
