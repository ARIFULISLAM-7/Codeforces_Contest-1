#include <iostream>
int main () {
    int a, b;
    std:: cin >> a >> b;
    if ((a > 0 || b > 0) && abs(a- b) <= 1) {
        std:: cout << "YES";
    } else {
        std:: cout << "NO";
    }
    return 0;
}