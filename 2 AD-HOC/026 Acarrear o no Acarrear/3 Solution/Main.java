import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main{
	public static void main(String [] args) throws Exception{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		String txt;
		while((txt = reader.readLine()) != null){
			long v1 = Long.parseLong(txt.split(" ")[0]),
				 v2 = Long.parseLong(txt.split(" ")[1]),
				 answer =  0;
			int i = 0;
			do{
				if(!(v1%2 == v2%2)){
					answer += (int)Math.pow(2,i);
				}
				v1 /= 2;
				v2 /= 2;
			}while(i++ != 32);
			System.out.println(answer);
		}
	}
}