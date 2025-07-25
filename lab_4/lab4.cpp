#include <stdio.h>

int main() {
    char emp_id[11];         // รับค่าตัวเลข (สูงสุด 10 อักษร + 1 สำหรับ null terminator)
    int working_hours;       // int รับค่าจำนวณเต็ม (ในที่นี้แทนชั่วโมงทำงาน)
    float salary_per_hour;   // รายได้ต่อชั่วโมง

    // รับข้อมูลจากผู้ใช้ โดยกำหนดข้อมูลที่รับ เข้ามาแทนค่าด้วยตัวแปล emp_id, working_hours และ salary_per_hour
    // โดยใช้ printf เพื่อแสดงข้อความ และ scanf เพื่อรับค่าจากผู้ใช้
    printf("=====================================\n");
    printf("        Employee Salary Form         \n");
    printf("=====================================\n");

    printf(">> Enter Employee ID      : ");
    scanf("%s", emp_id);

    printf(">> Enter Working Hours    : ");
    scanf("%d", &working_hours);

    printf(">> Enter Salary per Hour  : U$ ");
    scanf("%f", &salary_per_hour);

    // total_salary รายได้รวม และกำหนดสูตรการคำนวณ คือ ชั่วโมงทำงาน * รายได้ต่อชั่วโมง
    float total_salary = working_hours * salary_per_hour;

    // แสดงผลลัพธ์ โดยใช้ printf และ %s คือการกำหนดค่าเป็นสติง และ %.2f คือกำหนดค่าที่แสดงเป็น float โดย 2 คือตำแหน่งทศนิยม และ f คือโฟต และดึงค่าตัวแปร emp_id และ total_salary
    printf("\n--------- Salary Report ---------\n");
    printf("Employees ID      = %s\n", emp_id);
    printf("Salary            = U$ %.2f\n", total_salary);

    return 0;
}