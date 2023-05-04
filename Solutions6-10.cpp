#include <iostream>
using namespace std;
bool isPrime(int x) {
    for (long i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    // Project Euler Solutions 6-10
    // Problem 6
        long long sumOfSquares = 0;
        long long squareOfSums = 0;
        for (int i = 1; i <= 100; i++) {
            sumOfSquares += i*i;
            squareOfSums += i;
        }
        cout << squareOfSums*squareOfSums - sumOfSquares;
    // Problem 7
        int index = 1;
        int counter = 0;
        while (counter <= 10000) {
            if (isPrime(index)) {
                counter++;
                index++;
            } else {
                index++;
            }
        }
        while(!isPrime(index)) {
            index++;
        }
        cout << index;
    // Problem 8
        string number ="";
        number.append("73167176531330624919225119674426574742355349194934");
        number.append("96983520312774506326239578318016984801869478851843");
        number.append("85861560789112949495459501737958331952853208805511");
        number.append("12540698747158523863050715693290963295227443043557");
        number.append("66896648950445244523161731856403098711121722383113");
        number.append("62229893423380308135336276614282806444486645238749");
        number.append("30358907296290491560440772390713810515859307960866");
        number.append("70172427121883998797908792274921901699720888093776");
        number.append("65727333001053367881220235421809751254540594752243");
        number.append("52584907711670556013604839586446706324415722155397");
        number.append("53697817977846174064955149290862569321978468622482");
        number.append("83972241375657056057490261407972968652414535100474");
        number.append("82166370484403199890008895243450658541227588666881");
        number.append("16427171479924442928230863465674813919123162824586");
        number.append("17866458359124566529476545682848912883142607690042");
        number.append("24219022671055626321111109370544217506941658960408");
        number.append("07198403850962455444362981230987879927244284909188");
        number.append("84580156166097919133875499200524063689912560717606");
        number.append("05886116467109405077541002256983155200055935729725");
        number.append("71636269561882670428252483600823257530420752963450");
        unsigned long long multiple = 1;
        for (int i = 0; i < number.length() -13 + 1; i++) {
            unsigned long long newMultiple = 1;
            for (int z = 0; z < 13; z++) {
                newMultiple *= (number[i + z] - '0');
            }
            multiple = max(multiple,newMultiple);
        }
        cout << multiple;
    //Problem 9
        for (int i = 1; i < 1000; i++) {
            for (int j = i; j < 1000; j++) {
                for (int k = j; k < 1000; k++) {
                    if (i*i + j*j == k*k && i + j + k == 1000) {
                        cout << i*j*k << "\n";
                    }
                }
            }
        }
    //Problem 10
        long long sum = 0;
        for (long i = 2; i < 2000000; i++) {
            if (isPrime(i)) {
                sum += i;
            }
        }
        cout << sum;
    return 0;
}
