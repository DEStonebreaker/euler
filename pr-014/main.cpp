#include <algorithm>
#include <cmath>
#include <ios>
#include <iostream>
#include <unordered_map>
#include <vector>
using ll = long long;
using namespace std;

constexpr ll nextval(ll n) { return (n % 2 == 1) ? (3 * n + 1) : (n / 2); }

int main(int argc, const char** argv) {
    unordered_map<ll, int> seen{};
    int curr_max = 1;

    for (int i = 1; i < 1'000'000; ++i) {
        ll iter = 0;
        ll n = i;

        while (n != 1) {
            if (seen.contains(n)) {
                seen.insert({i, iter + seen.at(n)});
                break;
            }

            n = nextval(n);
            ++iter;
        }

        if (!seen.contains(i)) seen.insert({i, iter + 1});
        if (seen.at(i) > seen.at(curr_max)) curr_max = i;
    }

    cout << curr_max << ", length: " << seen.at(curr_max) << endl;

    return 0;
}
