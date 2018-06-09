/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
#include <stdio.h>
#include <math.h>

void main(){
	int cases = 0;	
	int cities = 0;
	do{
		if(scanf("%i",&cases) == -1)break;
		//Reviso sí es el caso final.
		if(cases > 0){
			if(cities > 0)printf("\n");
			//Estructura de datos bidimensional.
			int data[cases][2];
			//Variables auxiliares para agua, población y datos añadidos.
			int water = 0, citizen = 0, added = 1;			
			int i = 0;
			for (i = 0; i < cases; i++){
				//datos auxiliares para promedio, personas y agua.
				int avg = 0, people = 0, agua = 0;
				//Lectura de datos.
				if(scanf("%i %i", &people, &agua) == -1);
				//Sumatoria de personas y agua totales.
				citizen += people;
				water += agua;
				//Promedios.
				avg = (int) floor(agua / people);
				//Primer caso
				if(i == 0){
					data[0][0]= people;
					data[0][1]= avg;
				//Caso donde el dato que entra es, en promedio, mayor a resto.
				}else if(data[added-1][1] < avg){
					data[added][0] = people;
					data[added][1] = avg;
					added++;
				//Se busca la posición del nuevo dato.
				}else{
					int j;
					for(j = 0; j < i; j++){
						//Caso donde el promedio es igual.
						if(data[j][1] == avg){
							data[j][0] += people;
							break;
						//Caso donde el promedio queda justo en medio de los datos.
						}else if(data[j][1] > avg){
							int k;
							//Se abre el espacio para el nuevo dato.
							for(k = i+1; k >= j+1; k--){
								data[k][0] = data[k-1][0];
								data[k][1] = data[k-1][1];
							}
							//Se incluye en nuevo dato. 
							data[j][0] = people;
							data[j][1] = avg;
							added++;
							break;
						}
					}
				}
			}
			//Impresión de datos.
			printf("Cidade# %i:\n", ++cities);
			for (i = 0; i < added; i++){
				printf("%i-%i ", data[i][0], data[i][1]);
			}
			printf("\nConsumo medio: %.2f m3.\n",trunc(((float)water/citizen)*100)/100);
		}else break;//Rompo el ciclo while. 
	}while(1);
}