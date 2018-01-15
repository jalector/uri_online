/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
#include <stdio.h>
void main(){
	int num = 0, hour = 0;
	double salary = 0.0;
	scanf("%d\n%d\n%lf",&num, &hour, &salary);
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,(double)(hour*salary));
}