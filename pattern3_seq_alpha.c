// pattern3_seq_alpha.c
#include <stdio.h>
void pattern3(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern3(n);
    return 0;
}

