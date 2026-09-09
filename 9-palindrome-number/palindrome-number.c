bool isPalindrome(int x) {
    if (x < 0) return false;   // negatives are never palindrome

    int original = x;
    long rev = 0;             // long to avoid overflow

    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }

    return rev == original;
}