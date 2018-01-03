#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char s[101];
	char aux[101];
	char char_times[10];
	int times = 0;
	fgets(char_times, sizeof(char_times), stdin);

	times = atoi(char_times);
	while(times-- != 0){
		fgets(s, sizeof(s), stdin);
		int middle = (int)(strlen(s)/2);

		for(int i = middle-1; i >= 0; i--){
			printf("%c", s[i]);
		}
		for(int e = (middle*2)-1; e >= middle; e--){
			char auxc = s[e];
			if(auxc == '\n')continue;
			printf("%c",auxc);
			
		}
		printf("\n");
	}
	return 0;
}
