#include <iostream>
int main () {
    int num;
    std:: cin >> num;
    bool is_lucky = false;
    int result = num / 10;
    int remainder = num % 10;
    if (result != 0 && remainder % result == 0) {
        is_lucky = true;
    } else if (remainder != 0 && result % remainder == 0) {
        is_lucky = true;
    }
    if (is_lucky) {
        std:: cout << "YES";
    } else {
        std:: cout << "NO";
    }
    return 0;
}