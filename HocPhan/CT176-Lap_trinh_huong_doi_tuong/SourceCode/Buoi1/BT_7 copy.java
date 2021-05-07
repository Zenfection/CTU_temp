import java.util.Scanner;

public class BT_8 {
    //hàm nhập danh sách số nguyên
    public static int[] inputList(int n){
        Scanner sc = new Scanner(System.in);
        int[] intNumber = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("Nhập i" + i + "= ");
            int x = sc.nextInt();
            intNumber[i] = x;
        }
        return intNumber;
    }
    
    public static void main(String[] args) throws Exception {
        
    }
}
