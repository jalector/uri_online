/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.InputStreamReader;
public class Main{
	public static void main(String args []) throws Exception{
		long s = System.currentTimeMillis();
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		//Declaro las variables 
		int size = 0, steps = 0, times = 0;
		//Leo la cantidad de veces que haré el proceso
		times = Integer.parseInt(reader.readLine());
		for (int i = 0; i < times; i++) {
			String [] txt  = reader.readLine().split(" ");
			//Tomo el tamaño y el brinco de personas.
			size = Integer.parseInt(txt[0]);
			// Debe ser menos uno porque el arreglo cuenta desde 0.
			steps = Integer.parseInt(txt[1]) -1;
			//Creo a un conjunto de personas.
			int [] people = new int[size];
			for (int j = 0; j < size; j++) {
				people[j] = j;
			}
			//Salto entre las personas y las voy matando
			/*
				Concideraciones.
				1. La variable step, debe incrementarse siempre y cuando exista número.
				2. La variable j, debe regresar al inicio sí sobre pasa el tamaño del array.
				3. El búcle debe detenerse cuando sólo quede uno. 				
			*/
			int vivos = size;
			int step = 0;
			for (int j = 0; true; j++) {
				if(j > size -1){
					j = 0;
				}
				if(people[j] != -1){
					if(step == steps){
						//System.out.println("Matando al: "+(j+1)+", vivos : "+vivos);
						people[j] = -1;
						step = 0;
						vivos--;
					}else{
						step++;
					}
				}else if(vivos == 1){
					for(int k = 0; k < size; k++){
						if(people[k]!=-1){							
							//System.out.println("Vivos : " + vivos + ", Vivo: "+ (k+1));
							System.out.println("Case "+(i+1)+": "+ (k+1));
							break;
						}
					}
					break;
				}
			}
		}
		long e = System.currentTimeMillis();
		System.out.println("Time: "+ (e-s));-
	}
}