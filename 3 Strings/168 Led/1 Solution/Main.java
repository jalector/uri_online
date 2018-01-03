import java.io.BufferedReader;
import java.io.FileReader;
import java.io.InputStreamReader;
import java.io.File;
import java.io.IOException;


class Main{

    public static void main(String [] args) throws IOException{
        //BufferedReader s = new BufferedReader (new FileReader("archivo.txt"));
        BufferedReader s = new BufferedReader(new InputStreamReader(System.in));
        int times = Integer.parseInt(s.readLine());
        while(times > 0){
            String number = s.readLine();
            int amount = 0; 
            for(int i = 0, e = number.length(); i < e; i++){
                char c = number.charAt(i);
                switch(c){
                    case '0': amount+=6; break;
                    case '1': amount+=2; break;
                    case '2': amount+=5; break;
                    case '3': amount+=5; break;
                    case '4': amount+=4; break;
                    case '5': amount+=5; break;
                    case '6': amount+=6; break;
                    case '7': amount+=3; break;
                    case '8': amount+=7; break;
                    case '9': amount+=6; break;
                }
            }
            System.out.println(amount + " lets");
            amount = 0;
            times--;
        }
        s.close();

    }
} 