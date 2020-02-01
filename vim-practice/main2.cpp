// This source code generates all permutations.
// Using next_permutation defined in <algorithm> header file.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **agrv) {
	vector<int> a(4);
	iota(a.begin(), a.end(), 1);
	do {
		for (int x : a) printf("%d ", x);
		puts("");
	}
	while (next_permutation(a.begin(), a.end()));

	return 0;
}
