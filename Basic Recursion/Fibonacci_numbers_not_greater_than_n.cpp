#include <bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

vector<long long> factorialNumbers(long long n)
{
    vector<long long> ans;

    for (int i = 1; fact(i) <= n; i++)
    {

        long long res = fact(i);

        ans.push_back(res);
    }

    return ans;
}