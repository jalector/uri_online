#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	//FILE * file;
	//file = fopen("input.txt","r");
	do{
		int v1 = 0, v2 = 0;		
		if(scanf("%i %i", &v1, &v2) != -1){
			int n1[32]; int n2[32]; int binary[32];
			int i = 0;
			int answer = 0;
			for (int j = 0; j < 32; ++j){
				n1[j] = 0;
				n2[j] = 0;
				binary[j] = 0;
			}
			do{
				n1[31-(i++)] = v1%2;				
				v1 /= 2;
			}while(v1 != 0);

			i = 0;
			do{
				n2[31-(i++)] = v2%2;
				v2 /= 2;
			}while(v2 != 0);

			for (int j = 0; j < 32; ++j){
				binary[j] = (n1[j] == n2[j])? 0:1;				
				if(binary[j] != 0){
					answer += (int)pow(2,31-j);
				}
			}			
			printf("%i\n",answer);
		} else break;
	}while(1);
	return 0;
}
