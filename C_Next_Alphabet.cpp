#include <iostream>
int main () {
    char c;
    std:: cin >> c;
    if ( c == 'z') {
        std:: cout << 'a';
    } else {
        std:: cout << (char)(c + 1);
    }
    return 0;
}