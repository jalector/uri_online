/*
    Juda Alector, 13 de Enero 2018.
    León, Guanajuato. México.
*/
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void main(){
    //Variables de suma.
    int x = 0;
    int y = 0;
    while(1){
        int read = scanf("%i %i",&x, &y);
        //Leo hasta que no tenga más que leer.
        if(read != -1){
            //Variables lo suficiente grander para 20;
            uint64_t answer1 = 1;
            uint64_t answer2 = 1;     
            //Determino el primer factorial.
            if(x > 0){                
                do{
                    answer1*=x--;
                }while(x > 1);
            }       
            //Determino el segundo factorial.
            if(y > 0){
                do{
                    answer2*=y--;    
                }while(y > 1);
            }
            //Imprimo el resultado.
            printf("%" PRIu64 "\n", answer1+answer2);
        }else break;
    }    
}