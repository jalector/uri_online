/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
#include <stdio.h>
void main(){
	do{
		unsigned long v1 = 0, v2 = 0;
		if(scanf("%lu %lu", &v1, &v2) != -1){	
			printf("%lu\n", v1^v2);
		}else break;
	}while(1);	
}