#include <stdio.h>

int main() {
    int n;
    printf("enter the size:\n");
    scanf("%d", &n);

    int a[n];
    int i;
    int first, second;

    printf("enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    first = second = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    printf("2nd largest number is: %d\n", second);

    return 0;
}
