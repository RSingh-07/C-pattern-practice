// pattern5_seq_numbers.c
#include <stdio.h>
void pattern5(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern5(n);
    return 0;
}

