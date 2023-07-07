#include <stdio.h>

int countCharacters(const char* str) {
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    int count = countCharacters(inputString);

    printf("Number of characters: %d\n", count);

    return 0;
}

