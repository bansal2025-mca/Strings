#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j] && i != j) {
                count++;
            }
        }
        if (count == 0) {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("All characters are repeating.\n");

    return 0;
}
