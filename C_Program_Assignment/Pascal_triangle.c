#include <stdio.h>
int main() {
    int n ;
    int i, j;
    int value;
    printf("Enter value of n :");
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        value = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
