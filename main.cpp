#include <bits/stdc++.h>
using namespace std;

vector<int> a;

void f(int d) {
    if (d > 1000000) return;
    int x = d + d * d;
    a.push_back(x);
    f(d+1);
}

int main() {
    f(0);
    puts("DONE");
    printf("%d\n", (int)a.size());
}
