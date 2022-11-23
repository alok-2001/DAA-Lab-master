public class lcs {
    public static void main(String[] args) {

        String s1 = "TCGTT";
        String s2 = "ATTCGTA";

        char[] x = s1.toCharArray();
        char[] y = s2.toCharArray();
        int m = x.length;
        int n = y.length;
        lcs(m, n, x, y);
    }

    public static void lcs(int m, int n, char[] x, char[] y) {
        int dp[][] = new int[m + 1][n + 1];
        String cdp[][] = new String[m + 1][n + 1];

        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                    cdp[i][j] = "0 ";
                } else if (x[i - 1] == y[j - 1]) {
                    dp[i][j] = (dp[i - 1][j - 1] + 1);
                    cdp[i][j] = "T" + Integer.toString(dp[i][j]);
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                    if (dp[i - 1][j] > dp[i][j - 1])
                        cdp[i][j] = "U" + Integer.toString(dp[i][j]);
                    else {
                        cdp[i][j] = "L" + Integer.toString(dp[i][j]);
                    }
                }
                System.out.print(cdp[i][j] + " ");
            }
            System.out.println("");
        }
        System.out.println("Longest Common Subsequence: " + dp[m][n]);
    }

    public static int max(int x, int y) {
        return Math.max(x, y);
    }
}