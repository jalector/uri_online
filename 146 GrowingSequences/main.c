#include <stdio.h>

void main(){
	while(1){
		int i = 0;
		scanf("%d",&i);
		if(i == 0)break;
		int j;
		for (j = 1; j < i; ++j){
			printf("%d ",j);
		}
		printf("%d\n",i);
	}
}