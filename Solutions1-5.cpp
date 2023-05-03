#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    // Project Euler Solutions 1-5
    // Problem 1
        int sum1 = 0;
        for (int i = 3; i < 1000; i += 3) {
            sum1 += i;
        }
        for (int i = 5; i < 1000; i += 5) {
            sum1 += i;
        }
        for (int i = 15; i < 1000; i += 15) {
            sum1 -= i;
        }
        std::cout << sum1;
    // Problem 2
        int sum = 2;
        int a2 = 1;
        int b2 = 2;
        while (a2 + b2 < 4000000) {
            b2 = b2 + a2;
            a2 = b2 - a2;
            if ((a2 + b2) % 2 == 0) {
                sum += a2 + b2;
            }
        }
        std::cout << sum;
    // Problem 3
        long long number = 600851475143;
        long biggestDivisor = 0;
        for (long i = 3; i <= number; i += 2) {
            bool isPrime = true;
            for (long j = 3; j < i; j += 2) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime && number % i == 0) {
                biggestDivisor = i;
                number /= i;
            }
        }
        std::cout << biggestDivisor;
    // Problem 4
        int num;
        for (int a = 9; a > 0; a--) {
            for (int b = 9; b >= 0; b--) {
                for (int c = 9; c >= 0; c--) {
                    num = 100001*a + 10010*b + 1100*c;
                    for (int i = 999; i >= 100; i--) {
                        if (num % i == 0) {
                            if (num / i >= 100 && num / i <= 999) {
                                cout << num;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    // Problem 5
        int a = 1;
        int b = 2;
        long long smallestCommonMultiple = 2;
        while (b < 21) {
            b++;
            a++;
            smallestCommonMultiple = smallestCommonMultiple*a*b/gcd(a*b,smallestCommonMultiple);
        }
        cout << smallestCommonMultiple;
    return 0;
}
