/*
	Juda Alector, 13 de Enero 2018.
	León, Guanajuato. México.
*/
import java.math.BigInteger;
import java.io.BufferedReader;
import java.io.InputStreamReader;
public class Main{
	public static void main(String [] args) throws Exception{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		String text = null;
		//Leo hasta que el lector sea null.
		while((text = reader.readLine()) != null){
			//Obtengo los números del texto leío.
			int num1 = Integer.parseInt(text.split(" ")[0]),
				num2 = Integer.parseInt(text.split(" ")[1]);

			//Declaro objetos que puedan tener el valor de 20!.
			BigInteger sum1 = new BigInteger("1"),
					   sum2 = new BigInteger("1");

			//Objento el primer factorial.
			if(num1 > 0){		   
				do{
					sum1 = sum1.multiply(BigInteger.valueOf(num1--));
				}while(num1 > 0);
			}
			//Objento el segundo factorial.
			if(num2 > 0){		   
				do{
					sum2 = sum2.multiply(BigInteger.valueOf(num2--));
				}while(num2 > 0);
			}
			//Imprimo la suma del factorial.
			System.out.println(sum1.add(sum2));
		}
	}
}