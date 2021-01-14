import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int ans = 0;
        // String型のstrを配列に
        String[] strings = str.split("");

        for (String s : strings){
            if(s.equals("1")){
                ans++;
            }
        }
        System.out.println(ans);
    }
}
