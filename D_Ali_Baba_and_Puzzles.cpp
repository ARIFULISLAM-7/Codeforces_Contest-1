#include <iostream>
int main () {
    long long a, b, c, d;
    std:: cin >> a >> b >> c >> d;
    if (a + b - c == d) {
        std:: cout << "YES";
        return 0;
    }
    if (a + b * c == d) {
        std:: cout << "YES";
        return 0;
    }
    if (a - b + c == d) {
        std:: cout << "YES";
        return 0;
    }
    if (a - b * c == d) {
        std:: cout << "YES";
        return 0;
    }
    if (a * b + c == d) {
        std:: cout << "YES";
        return 0;
    }
    if (a * b - c == d) {
        std:: cout << "YES";
        return 0;
    }
    std:: cout << "NO";
    return 0;
}