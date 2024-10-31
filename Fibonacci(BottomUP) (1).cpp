#include <bits/stdc++.h>

using namespace std;

int Fibonacci(int N)
{

    int Fib[N+1];

    Fib[0] = 0;
    Fib[1] = 1;

    for(int i = 2; i <= N; i++)
        Fib[i] = Fib[i-1]+Fib[i-2];

    return Fib[N];
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fib(" << n << "): " << Fibonacci(n) << endl;

    return 0;
}
