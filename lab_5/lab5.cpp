#include <stdio.h>
#include <stdlib.h>

int main() {
    int score;
    printf("    ยินดีต้องรับสู่โปรแกรมคำนวณเกรด\n");
    printf("กรุณใส่คะแนนของคุณ: ");
    if (scanf("%d", &score) != 1) {
        printf("\n[Error] กรุณาใส่แค่ตัวเลขเท่านั้น\n");
        return 0;
    }
    // \n เหมือนการกด Enter ใน world หรือการขึ้นบรรทัดใหม่
    printf("\nคะแนนของคุณ: %d\n", score);
    printf("-----------------------------------\n");
    printf("เกรดของคุณคือ: ");

    if (score < 50) {
        printf("F\n");
    } else if (score < 55) {
        printf("D\n");
    } else if (score < 60) {
        printf("D+\n");
    } else if (score < 65) {
        printf("C\n");
    } else if (score < 70) {
        printf("C+\n");
    } else if (score < 75) {
        printf("B\n");
    } else if (score <= 80) {
        printf("B+\n");
    } else {
        printf("A\n");
    }

    printf("===================================\n");

    return 0;
}
