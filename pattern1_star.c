// pattern1_star.c
#include <stdio.h>
void pattern1(int n) {
    for (int i = 0; i < n; i++) { //outer loop for rows 
        for (int j = 0; j < n; j++) { // inner loops for columns 
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern1(n);
    return 0;
}
