#include <iostream>
#include <cctype>   // Required for isalnum and tolower
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        // Skip non-alphanumeric characters from left
        while (left < right && !isalnum(s[left])) {
            left++;
        }

        // Skip non-alphanumeric characters from right
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare lowercase characters
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s)) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
