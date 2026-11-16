#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#include "gmpxx.h"

int main(int argc, const char** argv) {
    std::string input;
    std::cin >> input;
    const int WINDOW = 13;
    mpz_class max = 0;

    for (int i = 0; i < input.size() - WINDOW; ++i) {
        bool has_zero = false;
        mpz_class curr = 1;

        for (int j = i; j < i + WINDOW; ++j) {
            if (input[j] == '0') {
                i = j;
                has_zero = true;
                continue;
            }

            curr *= input[j] - '0';
        }

        if (has_zero) continue;

        max = std::max(max, curr);
    }

    std::cout << max << std::endl;

    return 0;
}
