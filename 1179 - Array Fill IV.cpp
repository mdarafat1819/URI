#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void parPrint(int par[], int idx)
{
    for(int i = 0, j = 0; i <idx; i++, j++)
        cout<<"par["<<j<<"]"<<" = "<<par[i]<<endl;
}
void imparPrint(int impar[], int idx)
{
    for(int i = 0, j = 0; i < idx; i++, j++)
        cout<<"impar["<<j<<"]"<<" = "<<impar[i]<<endl;
}

int main()
{
    int par[5], impar[5], parIdx = 0, imparIdx = 0;
    for(int i = 0; i < 15; i++)
    {
        int number;
        cin>>number;
        if(!(number % 2))
        {
            par[parIdx] = number;
            parIdx++;
        }
        else
        {
            impar[imparIdx] = number;
            imparIdx++;
        }
        if(imparIdx == 5)
        {
            imparPrint(impar, imparIdx);
            imparIdx = 0;
        }
        else if(parIdx == 5)
        {
            parPrint(par, parIdx);
            parIdx = 0;
        }
    }
    imparPrint(impar, imparIdx);
    parPrint(par, parIdx);

    return 0;
}
