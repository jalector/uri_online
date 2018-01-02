#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//FILE * file;
	//file = fopen("input.txt", "r");
	do{
		int v1 = 0, v2 = 0, i = 0, answer = 0;
		//if(fscanf(file,"%i %i", &v1, &v2) != -1){
		if(scanf("%i %i", &v1, &v2) != -1){
			do{
				if(!(v1%2 == v2%2)){
					answer += pow(2,i);
				}
				v1 /= 2;
				v2 /= 2;
			}while(i++ != 32);
			printf("%i\n",answer);
		}else break;

	}while(1);	
	return 0;
}
