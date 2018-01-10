#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void main(){
    int x = 0;
    int y = 0;
    while(1){
        int read = scanf("%i %i",&x, &y);
        if(read != -1){
            uint64_t answer1 = 1;
            uint64_t answer2 = 1;            
            do{
                answer1*=x--;
            }while(x > 1);
            do{
                answer2*=y--;    
            }while(y > 1);
            printf("%" PRIu64 "\n", answer1+answer2);
        }else break;
    }    
}