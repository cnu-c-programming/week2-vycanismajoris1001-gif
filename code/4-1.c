#include <stdio.h>

int main() {
    int n1, n2;
    char c;

    scanf("%d %d %c", &n1, &n2, &c);
    
    if (c == '+') {
            printf("%d\n", n1 + n2);
        } else if (c == '-') {
            printf("%d\n", n1 - n2);
        } else if (c == '*') {
            printf("%d\n", n1 * n2);
        } else if (c == '/') {
            if (num2 != 0) {
                printf("%d\n", n1 / n2);
            } else {
                printf("Error: Division by zero\n");
            }
        }

    return 0;
    }
