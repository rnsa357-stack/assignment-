#include "mylib.h"
#include <math.h>

// helper: reverse digits of a number
int reverseDigits(int n) {
    int r = 0;
    while (n) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

// Armstrong number check
int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == num;
}

// Adams number check
int isAdams(int num) {
    int sq = num * num;
    int rev = reverseDigits(num);
    int revsq = rev * rev;
    return reverseDigits(sq) == revsq;
}

// Prime check (helper)
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Prime Palindrome check
int isPrimePalindrome(int num) {
    return isPrime(num) && (num == reverseDigits(num));
}
