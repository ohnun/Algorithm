import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int n = 100; // 人数
        int t = 1000; // 轮数
        experiment(n, t);
    }

    public static void experiment(int n, int t) {
        double[] wealth = new double[n];
        Arrays.fill(wealth, 100);

        boolean[] hasMoney = new boolean[n];

        for(int i = 0; i < t; ++i) {
            Arrays.fill(hasMoney, false);
            for(int j = 0; j < n; ++j) {
                if(wealth[j] > 0) {
                    hasMoney[j] = true;
                }
            }

            for(int j = 0; j < n; ++j) {
                int other = j;
                do {
                    other = (int)(Math.random() * n);
                } while(other == j);
                wealth[j]--;
                wealth[other]++;
            }
        }

        System.out.println("此时基尼系数为: " + gini(wealth));
    }

    public static double gini(double[] arr) {
        double s1 = 0; // 财富总和
        double s2 = 0; // 差值总和

        for(int i = 0; i < arr.length; ++i) {
            s1 += arr[i];
            for(int j = 0; j < arr.length; ++j) {
                s2 += Math.abs(arr[i] - arr[j]);
            }
        }
        return s2 / (2 * arr.length * s1);
    }
}