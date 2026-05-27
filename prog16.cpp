#include <iostream>
#include <string>
using namespace std;
int main() {
    char str[25], reverse[25] = {'\0'};
    int i, len = 0, flag;
    cout << "Enter a string: ";
    cin.getline(str, 25);
    for (len = 0; str[len] != '\0'; len++);
    for (i = len - 1; i >= 0; i--) {
        reverse[len - i - 1] = str[i];
    }
    reverse[len] = '\0';
    flag = 1;
    for (i = 0; i < len; i++) {
        if (reverse[i] != str[i]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        cout << "The string \"" << str << "\" is a palindrome.";
    } else {
        cout << "The string \"" << str << "\" is not a palindrome.";
    }
    return 0;
}