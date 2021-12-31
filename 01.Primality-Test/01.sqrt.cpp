#include <bits/stdc++.h>

using namespace std;

FILE *inputFile() {
    const char* fileName = "../01.Primality-Test/01.sqrt.inp";
    FILE *input = freopen(fileName, "r", stdin);

    if (input == nullptr) {
        cout << "Input Not Found." << endl;
        exit(1);
    }

    return input;
}

bool isPrime(int num) {
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return num > 1;
}

int main(int argc, char* argv[]) {
    inputFile();
    int T, x;
    cin >> T;

    while (T--) {
        cin >> x;
        cout << "isPrime(" << x << "): ";
        cout << isPrime(x) << endl;
    }
    return 0;
}
