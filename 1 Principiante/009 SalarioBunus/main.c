/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
#include <stdio.h>
void main(){
	char name [20];
	double salary = 0, bonus = 0;
	scanf("%s\n%lf\n%lf",name,&salary,&bonus);
	printf("TOTAL = R$ %.2lf\n",((bonus*.15)+salary));
}