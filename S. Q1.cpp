#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    int length = stringLength(inputString);

    printf("Length of the string: %d\n", length);

    return 0;
}

