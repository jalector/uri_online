#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int int_times = 0;
	scanf("%d",&int_times);
	if(int_times > 0 && int_times < 101){
		while(int_times-- > 0){
			int int_number = 0;
			scanf("%d", &int_number);
			if(int_number > 0 && int_number < 65){
				unsigned long long answer = (unsigned long long)(pow(2, int_number)/12000);
				printf("%llu kg\n", answer);
			}
		}
	}

	return 0;
}