#include <stdio.h>
#include <string.h>

int Palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (Palindrome(str)) {
        printf("string is a palindrome\n");
    } else {
        printf("string is not a palindrome\n");
    }
    return 0;
}
