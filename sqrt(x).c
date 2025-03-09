int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

    int left = 0, right = x, result = 0;
    while (left <= right) {
        int mid =(left + right)/ 2;

        // To prevent overflow, compare mid * mid with x using division
        if (mid <= x / mid) {
            result = mid; // Update the result
            left = mid + 1; // Move to the right half
        } else {
            right = mid - 1; // Move to the left half
        }
    }
    return result;
}
