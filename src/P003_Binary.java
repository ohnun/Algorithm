public class P003_Binary {
    public static void main(String[] args) {
        int a = 19;
        printBinary(a);
    }

    // 打印 32 位整数的二进制表示. 
    public static void printBinary(int a) {
        for(int i = 0; i < 32; ++i) {
            System.out.print(binary(a)[i]);
            if(i % 4 == 3) {
                System.out.print(" ");
            }
        }
        System.out.println();
    }

    public static int[] binary(int a) {
        int[] b = new int[32];
        for(int i = 0; i < 32; ++i) {
            b[31 - i] = a & 1;
            a >>= 1;
        }
        return b;
    }
}
