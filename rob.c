#define max(a,b) ((a) > (b) ? (a) : (b))
int rob(int num[], int n) {
    int (*F)[2] = calloc(n + 1, 8), i;
    for(i = 0; i < n; i ++) {
        F[i + 1][0] = max(F[i][0], F[i][1]);
        F[i + 1][1] = F[i][0] + num[i];
    }
    return max(F[n][0], F[n][1]);
}
