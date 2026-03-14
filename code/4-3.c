#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool b = true;

    if (scanf("%d", &n) != 1) 
        return 0;

    if (n < 2) {
        b = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                b = false;
                break;
            }
        }
    }

    if (b) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
