#include <iostream>
int main () {
    long double n, k, a;
    std:: cin >> n >> k >> a;
    long long x = (n * k) / a;
    double p = (n * k) / a, test = p - x;
    if (test > 0) {
        std:: cout << "double";
    } else if (p > 2147483647) {
        std:: cout << "long long";
    } else {
        std:: cout << "int";
    }
    return 0;
}