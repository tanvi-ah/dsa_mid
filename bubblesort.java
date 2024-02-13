public class Main {
    public static void main(String[] args) {
        int[] Bubble = {10,2,3,1,8,6,33,54,46,48};
        int Length = Bubble.length;

        for (int i = 0; i < Length - 1; i++) {
            for (int j = 0; j < Length - 1 - i; j++) {
                if (Bubble[j] > Bubble[j+1]){
                    int temp = Bubble[j];
                    Bubble[j] = Bubble[j+1];
                    Bubble[j+1] = temp;
                }
            }
        }

        System.out.print("After sorting: ");
        for (int j : Bubble) {
            System.out.print(" " + j);

        }
    }
}