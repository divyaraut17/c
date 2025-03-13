 isPalindrome(const char *s) {
    int left = 0, right = strlen(s) - 1;

    while (left < right) {
        // Move left forward if not alphanumeric
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Move right backward if not alphanumeric
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare characters (case insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
