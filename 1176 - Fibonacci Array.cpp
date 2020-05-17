#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    long long ans[61] = {0};
    ans[0] = 0, ans[1] = 1, ans[2] = 2;
    for(int i = 2; i < 61; i++) ans[i] = ans[i - 2] + ans[i-1];
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("Fib(%lld) = %lld\n", n, ans[n]);
    }

    return 0;
}
