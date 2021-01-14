import java.util.Scanner;

public class Main {
    // 何回操作を行えるかをカウントする関数
    public static int count_operation(int[] A, int N){
        int count = 0;
        int even_count = 0;
        while (true){
            for (int i=0; i<N; i++){
                if (A[i]%2==0){
                    A[i] /= 2;
                    even_count++;
                }
            }
            if (even_count == N){
                count++;
                even_count = 0;
            } else {
                break;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        for (int i=0; i <N; i++){
            A[i] = sc.nextInt();
        }
        int ans = count_operation(A, N);

        System.out.println(ans);
    }
}
