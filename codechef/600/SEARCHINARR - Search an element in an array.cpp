static String solve(int N, int X, int[] arr) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            return "YES";
        }
    }
    return "NO";
}
