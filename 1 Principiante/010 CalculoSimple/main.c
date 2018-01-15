/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
#include <stdio.h>

void main(){
	int i = 0;
	double value = 0, amount = 0;

	scanf("%d %d %lf", &i, &i, &value);
	amount = i * value;
	scanf("%d %d %lf", &i, &i, &value);
	amount += i * value;
	printf("VALOR A PAGAR: R$ %.2lf\n",amount);
}