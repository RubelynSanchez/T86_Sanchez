#include<stdio.h>
int main(){
    int rpm = 3000, deg = 360, secs = 60, d;
    d = rpm*deg/secs;
    printf("rpm*deg/secs = %d\n", d);
    d = rpm*deg/secs;
    printf("%d degrees per second\n", d);
    return 0;}