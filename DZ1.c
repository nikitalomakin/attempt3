#include<stdio.h>
#include <ctype.h>
int main() {
    printf("Введите число с плавающей точкой\n");
    char c;
    while ((c = getchar()) != '\n') {
        if (c == '.') {
            printf("|");
        } else if ( ((c > '9') || (c < '0'))) {
            printf("НАдо вводить цифры\n");
            return 0;
        } else printf("%c",c);

    }
    printf("\n");
} 