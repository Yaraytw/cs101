#include <stdio.h>

    int main(){
    for(int x=1, y=1, k=x*y; x<=9; y++){
        printf("%d*%d=%d\t", x, y, k);
        if(y == 9){
            printf("\n");
            y=0;
            x++;
        }
    }
    
}
