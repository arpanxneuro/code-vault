int getSecondLargest(int *arr, int n) {
    if (n < 2) return -1;
    int max = arr[0];
    int sec_max = -1;
    int found = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int j = 0; j < n; j++) {
        if (arr[j] < max) {
            if (!found || arr[j] > sec_max) {
                sec_max = arr[j];
                found = 1;
            }
        }
    }

    return found ? sec_max : -1;
}
