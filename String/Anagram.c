#include <stdio.h>
#include <string.h>
void sort(char *str) {
    for (int i = 0; str[i]; i++) {
        for (int j = i + 1; str[j]; j++) {
            if (str[i] > str[j]) {
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams.\n");
        return 0;
    }
    sort(str1);
    sort(str2);
    if (strcmp(str1, str2) == 0)
        printf("Strings are anagrams.\n");
    else
        printf("Not anagrams.\n");
    return 0;
}
