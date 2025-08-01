#include <stdio.h>

int main(){
    int N;
    printf("Enter the number : ");
    scanf("%d", &N);
    printf("Error: Please enter a valid integer number.\n");
    if ( N % 2 != 0)
        for (int i = 1 ; i <= N; i += 2) {
            printf("%d ", i);
            return 1;
        }
    else
        for (int i = N; i >= 0 ; i -= 2) {
            printf("%d ", i);
        }
    return 0;
}