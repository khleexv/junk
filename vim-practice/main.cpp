// This source code generates all permutations.
// Using next_permutation defined in <algorithm> header file.

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(int argc, char **agrv) {
    vector<int> a(4);
    iota(a.begin(), a.end(), 1);
    do {
        for (int x : a) printf("%d ", x);
        puts("");
    }
    while (next_permutation(a.begin(), a.end()));

    int bhh = 0;
    bhh += 1;
    bhh += 2;

    return 0;
}

// Comment Test
//
// oh
