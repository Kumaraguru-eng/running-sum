int* sortedSquares(int* arr, int n) {
    int* result = (int*)malloc(n * sizeof(int));
    int i = 0, j = n - 1, k = n - 1;

    while(i <= j) {
        if(arr[i]*arr[i] > arr[j]*arr[j]) {
            result[k--] = arr[i]*arr[i];
            i++;
        } else {
            result[k--] = arr[j]*arr[j];
            j--;
        }
    }
    return result;
}
