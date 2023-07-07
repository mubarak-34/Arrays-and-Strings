#include <stdio.h>

void findSubstring(const char* str, const char* substr) {
    int strLen = 0;
    int substrLen = 0;
    int i, j;

    while (str[strLen] != '\0') {
        strLen++;
    }
    while (substr[substrLen] != '\0') {
        substrLen++;
    }

    for (i = 0; i <= strLen - substrLen; i++) {
        int match = 1;

        for (j = 0; j < substrLen; j++) {
            if (str[i + j] != substr[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            printf("Substring found at index: %d\n", i);
        }
    }
}

int main() {
    char inputString[100];
    char substring[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Enter a substring to search: ");
    fgets(substring, sizeof(substring), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';
    substring[strcspn(substring, "\n")] = '\0';

    findSubstring(inputString, substring);

    return 0;
}

