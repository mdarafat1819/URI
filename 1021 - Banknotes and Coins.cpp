#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin>>n;
    n = n * 100;
    int N = n;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", N / 10000);
    N = N % 10000;
    printf("%d nota(s) de R$ 50.00\n", N / 5000);
    N = N % 5000;
    printf("%d nota(s) de R$ 20.00\n", N / 2000);
    N = N % 2000;
    printf("%d nota(s) de R$ 10.00\n", N / 1000);
    N = N % 1000;
    printf("%d nota(s) de R$ 5.00\n", N / 500);
    N = N % 500;
    printf("%d nota(s) de R$ 2.00\n", N / 200);
    N = N % 200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", N / 100);
    N = N % 100;
    printf("%d moeda(s) de R$ 0.50\n", N / 50);
    N = N % 50;
    printf("%d moeda(s) de R$ 0.25\n", N / 25);
    N = N % 25;
    printf("%d moeda(s) de R$ 0.10\n", N / 10);
    N = N % 10;
    printf("%d moeda(s) de R$ 0.05\n", N / 5);
    N = N % 5;
    printf("%d moeda(s) de R$ 0.01\n", N);

    return 0;
}
