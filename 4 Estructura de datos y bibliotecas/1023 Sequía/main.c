/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
#include <stdio.h>
#include <math.h>

void main(){
	//Número de casos.
	int cases = 0;	
	//Número de ciudades.
	int cities = 0;
	do{
		scanf("%i",&cases);
		//Sí no es el caso de termino.
		if(cases > 0){
			//Imprimimos sí no es el primero.
			if(cities > 0)printf("\n");
			//Arreglo de información en forma de tabla(arreglo bidimencional).
			int data[cases][2];
			//Agua y personas totales.
			int water = 0, citizen = 0;
			// Para ordenar el arreglo de información.
			int max = 0; 
			//Leer la inforamción
			for (int i = 0; i < cases; i++){
				scanf("%i %i", &data[i][0], &data[i][1]);
				//Conteo total de la agua y las personas de la ciudad.
				citizen += data[i][0];
				water += data[i][1];
			}

			//Comienza bubble sort
			for(int i = 0; i < cases; i++){
				int top = cases-i;
				for(int j = 1; j < top; j++){
					int promedio1 = (int) floor(data[j][1]/data[j][0]),
					    promedio2 = (int) floor(data[max][1]/data[max][0]);
					//Encuetro la posición del mas grande
					if(promedio1 > promedio2){						
						max = j;
					}
					//Lo deposito en último lugar disponible.
					if(j == top-1){
						int aux1 = data[max][0],
							aux2 = data[max][1];

						data[max][0] = data[top-1][0];
						data[max][1] = data[top-1][1];

						data[top-1][0] = aux1;	
						data[top-1][1] = aux2;

						max = 0;
					}
				}
			}
			//Termina buble sort

			//Imprimo los resultados
			printf("Cidade# %i:\n", ++cities);
			for (int i = 0; i < cases; i++){
				printf("%i-%i ", data[i][0], (int) floor(data[i][1]/data[i][0]));
			}
			printf("\nConsumo medio: %0.2f m3.\n",(float) water/citizen);
		}else break;//Rompo el ciclo while. 
	}while(1);
}