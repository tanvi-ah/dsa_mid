public class Binary_Search {
    public static void main(String[] args) {
        int[] a = {1,2,3,4,5,6,7,8,9,15,25,35,55,60,70,75,100};
        int Binary_Search = 15, left,right,middle;

        left = 0;
        right = 16;

        while (left <= right)
        {
            middle = (left + right) / 2;
            if (a[middle] == Binary_Search)
            {
                System.out.println("Item found at index number: " + middle);
                return;
            } else if (a[middle] < Binary_Search) {
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
        }

        System.out.println("Item not found in this array..!");
    }
}
