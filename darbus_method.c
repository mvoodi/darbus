#include <stdio.h>
#include <math.h>

int main() {
    int num = 12;
    int num1 = 0;
    double uds = 0;
    double lds = 0;
    double dist = ((3 * M_PI / 2) - M_PI) / 12;
    while(num1 < num){
        double resultUDS = sin(M_PI + (dist*num1)) * dist;
        double resultLDS = sin(M_PI + (dist*(num1 + 1))) * dist;
        uds = uds + resultUDS;
        lds = lds + resultLDS;
        num1 = num1 + 1;
    }
    printf("UDS: %f", uds);
    printf("LDS: %f", lds);
    return 0;

}