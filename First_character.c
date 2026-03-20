#include <stdio.h>

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    printf("First character is: %c", str[0]);

    return 0;
}