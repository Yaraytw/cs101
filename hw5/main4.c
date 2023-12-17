#include <stdio.h>

int main(){
    int i=12345, tenthousands=i/10000, thousands=i/1000%10, hurdreds=i/100%10, tens=i/10%10, units=i%10;
    printf("%d",tenthousands*10000+thousands*1+hurdreds*100+tens*10+units*1000);
    return 0;
}