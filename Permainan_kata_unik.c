#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100];

    
    scanf("%s", A);

    
    scanf("%s", B);

    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else {
        int i = 0;
        while (A[i] == B[i] && i < strlen(A)) {
            i++;
        }

        if (i == strlen(A)) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}