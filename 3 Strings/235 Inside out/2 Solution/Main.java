import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
 
    public static void main(String[] args) throws IOException {
			BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
			int times = Integer.parseInt(reader.readLine());
			String aux;
			while(times-- > 0){
				aux = reader.readLine();
				int middle = aux.length()/2;

				for(int i = middle -1; i >= 0; i--){
					System.out.print(aux.charAt(i));
				}
				for(int i = aux.length()-1, e = middle; i >= e; i--){
					System.out.print(aux.charAt(i));
				}
				System.out.println();
			}
    }
 
}