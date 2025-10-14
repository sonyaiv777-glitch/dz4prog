#include <stdlib.h>
#include <stdio.h>
int main(int argc,char** argv){
    int k, i;
    float a[10];
    float b[10];
    for(i = 0; i < 10; i++){
        scanf("%f", &a[i]);
    }
    scanf("%d", &k);
    k = k%10;
    if(k<0)
        k=10+k;
    for(i = 0; i < 10; i++){
        b[(i+k)%10] = a[i];
    }
    for(i = 0; i < 10; i++){
        printf("%.2lf", b[i]);
    }
    printf("\n");
    return 0;
}