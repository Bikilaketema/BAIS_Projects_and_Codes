/**Write a program that finds and prints all of the prime numbers between 3 and 100. A prime
number is a number such that 1 and itself are the only numbers that evenly divide it (for
example, 3, 5, 7, 11, 13, 17, …). One way to solve this problem is to use a doubly nestedloop. 
The outer loop can iterate from 3 to 100 while the inner loop checks to see if the
counter value for the outer loop is prime. One way to see if number n is prime is to loop
from 2 to n 21 and if any of these numbers evenly divides n, then n cannot be prime. If none
of the values from 2 to n 21 evenly divides n, then n must be prime. (Note that there are
several easy ways to make this algorithm more efficient.)

Group Members name and ID
1. Bikila Ketema…………………………………….UGR/8950/13

2. Abduba Peter……………………………………..UGR/0729/13

3. Bilal Jemal………………………………………..UGR/4307/13

4. Ashenafi Degefe……………………………….UGR/8994/13

5. Beamlak Girma…………………………………..UGR/1862/13

6. Beniam Amito……………………………..…..UGR/0196/13*/

#include <iostream>

using namespace std;

int main() {

    cout << "Prime numbers between 3 and 100:" << endl;

    // iterate over all numbers between 3 and 100
    for (int i = 3; i <= 100; i++) {
        bool is_prime = true;

        // check if i is prime
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            cout << i << " ";
        }
    }

    cout << std::endl;

    return 0;
}
