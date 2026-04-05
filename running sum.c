int runningSum(int* A, int n) {
    for(int i = 1; i < n; i++) {
        A[i] = A[i] + A[i-1];
    }
    return 0;
}
