#include <stdio.h>

int main() {
    int n = 1000000;
    double pi = 0;
    for (int i = 0; i < n; i++) {
        double x = 1.0 - (i % 2)*2; 
        double y = 2*i + 1;
        pi += x/y;
    }
    pi *= 4;
    printf("%.5f\n", pi);
    return 0;
}
