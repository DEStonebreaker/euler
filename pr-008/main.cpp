#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#include "gmpxx.h"

int main(int argc, const char** argv) {
    /* Sliding window with gmp?? */
    std::string input;
    std::cin >> input;
    const int WINDOW = 13;
    mpz_class max = 0;

    // initial product
    for (int i = 0; i < 1000 - WINDOW; ++i) {
        mpz_class curr = 1;

        for (int j = i; j < i + WINDOW; ++j) {
            curr *= input[j] - '0';
        }
        max = std::max(max, curr);
    }

    std::cout << max << std::endl;

    return 0;
}
