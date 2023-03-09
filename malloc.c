#include<stdio.h>
#include<stdlib.h>

int main(){
    int max, k;
    double *dmp, sum = 0.0;

    printf("입력하는 숫자는 몇개? ");
    scanf("%d", &max);
    dmp = (double *)malloc(sizeof(double) * max);

    printf("%d개 값을 입력하시오 :", max);
    for(k = 0; k < max; k++){
        scanf("%lf", &dmp[k]);
        sum = sum + dmp[k];
    }
    free(dmp);
    printf("평균 = %.1lf", sum / max);

    return 0;

}