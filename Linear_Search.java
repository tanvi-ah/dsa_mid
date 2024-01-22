import java.util.Scanner;
public class Linear_Search {
    public static void main(String[] args) {
        int[] a = {10,20,30,50,90,80,1,2,3,4,5,6,7,8,9,11,25,35};
        int search;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter search number: ");
        search = scanner.nextInt();

        for (int i = 0; i < a.length; i++) {
            if (a[i] == search)
            {
                System.out.println(search + " Item is found in this array.");
                return;
            }
        }
        System.out.println(search + " This item isn't found in this array.");
    }
}
