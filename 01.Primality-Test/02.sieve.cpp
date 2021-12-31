#include <bits/stdc++.h>

using namespace std;

const int N = 10e5;

FILE *inputFile() {
    const char* fileName = "../01.Primality-Test/02.sieve.inp";
    FILE *input = freopen(fileName, "r", stdin);

    if (input == nullptr) {
        cout << "Input Not Found." << endl;
        exit(1);
    }

    return input;
}

int main(int argc, char* argv[]) {
    vector<bool> primes(N + 1, true);
    int T, x;
    inputFile();
    primes[0] = primes[1] = false;
    for (int i = 0; i * i <= N; ++i) {
        if (primes[i]) {
            for (int j = 2; i * j <= N; ++j) {
                primes[i * j] = false;
            }
        }
    }

    cin >> T;

    while (T--) {
        cin >> x;
        cout << "isPrime(" << x << "): ";
        if (x < 0) {
            cout << 0 << endl;
        } else {
            cout << primes[x] << endl;
        }
    }
    return 0;
}
