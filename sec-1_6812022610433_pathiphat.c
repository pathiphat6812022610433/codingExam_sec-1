#include <stdio.h>

int main() {
    int work_ot= 10;
     int ot_hour= {1,2,3,4,5,6,7,8,9,10};
       int sum = 0;
     printf("Enter work_ot: %d\n", work_ot);
    printf("Enter %d ot_hour (one per line):\n", work_ot);


    float ot[work_ot]; 
    float sum; // สร้างตัวแปร float sum

    for (int i=0;i < work_ot;i++) { 
        printf("ot %d: ", i+1); 
        scanf("%f", &ot[i]); 
        sum += score[i]; 
    }
}