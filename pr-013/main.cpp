#include <gmpxx.h>

#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
#include <numeric>
#include <vector>

int main(int argc, const char** argv) {
    { /* GMP solution */
        mpz_class total = 0;
        mpz_class curr = 0;

        while (std::cin >> curr) {
            total += curr;
        }

        std::cout << total << std::endl;
    }

    { /* Restricted Solution */
    }

    return 0;
}
