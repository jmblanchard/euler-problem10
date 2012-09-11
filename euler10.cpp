// Author: Jason Blanchard
// Solve problem 10 on Project Euler.
// My approach will be to use the Sieve of Eratosthenes since I'm
// only searching up to 2 million for primes.

#include <iostream>

const int kMaxPrime = 2000001;
const int kSqrtMax = 1415;

int main() {
    bool nums[kMaxPrime];
    int i, j;
    double sum = 0;

    for (i = 0; i < kMaxPrime; ++i)
        nums[i] = true;

    // Sieve of Eratosthenes
    for (i = 2; i <= kSqrtMax; ++i) {
        if (nums[i]) {
            for (j = 0; i*i + j*i < kMaxPrime; ++j) {
                nums[i*i + j*i] = false;
            }
        }
    }

    // These should all be prime so add up their indices for the answer.
    for (i = 2; i < kMaxPrime; ++i) {
        if (nums[i])
            sum += i;
    }

    std::cout.precision(12);
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
