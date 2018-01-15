/*
	Juda Alector, 14 de Enero 2018.
	León, Guanajuato. México.
*/
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
public class Main{

	public static void main(String [] args) throws IOException{
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		while(true){
			if(n == 0)break;
			for (int i = 1; i < n; i++) {
				System.out.print(i+" ");
			}
			System.out.println(n);
		}
		System.out.println(fi - in);
	}
}