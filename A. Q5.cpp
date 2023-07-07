#include <stdio.h>

void findAdditiveSequences(int num, int num1, int num2, int sequence[], int length) {
    if (num == 0) {
        printf("Additive Sequence: ");
        for (int i = 0; i < length; i++) {
            printf("%d ", sequence[i]);
        }
        printf("\n");
    } else if (num < 0) {
        return;
    } 
	else {
        sequence[length] = num1;
        findAdditiveSequences(num - num1, num2, num1 + num2, sequence, length + 1);

        sequence[length] = num2;
        findAdditiveSequences(num - num2, num1, num2 + num1, sequence, length + 1);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sequence[100];
    findAdditiveSequences(num, 0, 1, sequence, 0);

    return 0;
}

