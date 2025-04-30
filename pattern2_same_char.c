// pattern2_same_char.c
#include <stdio.h>
void pattern2(int n, char ch) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}
int main() {
    int n;
    char ch;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter letter: ");
    scanf(" %c", &ch);
    pattern2(n, ch);
    return 0;
}
