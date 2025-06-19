#include <stdio.h>

int main() {
    char password[100];

    printf("Enter your password: ");
    scanf("%s", password);

    printf("Your password: %s\n", &password);

    return 0;
}
