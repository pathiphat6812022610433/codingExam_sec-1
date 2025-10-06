#include <stdio.h>

int main() {
    int otday;

    // รับค่าระดับ level จากผู้ใช้
    printf("Enter number of otday (1-4):");
    scanf("%d", &otday);

    // ตรวจสอบว่าค่าที่กรอกมาถูกต้องหรือไม่ (ต้องอยู่ในช่วง 1–4 เท่านั้น)
    if (otday <=0) {
        printf("Error: otday below 1 is not allowed.\n");
    } else if (otday>10) {
        printf("Error: otday above 4 is not allowed.\n");
    } else {
        // ถ้าค่าอยู่ในช่วง 1–4 ให้ใช้ switch แสดงระดับ
        switch (otday) {
            case 1:
                printf("Level 1: Beginner\n");
                break;
            case 2:
                printf("Level 2: Intermediate\n");
                break;
            case 3:
                printf("Level 3: Advanced\n");
                break;
        }
    }

    return 0;
}