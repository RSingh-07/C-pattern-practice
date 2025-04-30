
// pattern4_row_repeat.c
#include <stdio.h>
void pattern4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern4(n);
    return 0;
}

