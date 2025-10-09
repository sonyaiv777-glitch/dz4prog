#include <stdio.h>

int main(int argc,char** argv) {
    float num[10];
    float sum = 0;
    scanf("%f %f %f %f %f %f %f %f %f %f", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
    for (int i = 0; i < 10; i++) {
        sum += num[i];
    }
    printf("%.2f", sum / (float)10);
    return 0;
}