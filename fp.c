#include <stdio.h>
#include <math.h>

int main() {
    double n = INFINITY;

    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);

    n += 1e300;
    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);

    n *= 1e300;
    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);

    n -= 1e300;
    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);
    
    n *= -1;
    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);

    n -= 1e300;
    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);

    n *= 1e300;
    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);

    n += 1e300;
    if (n > 1e300) printf("%lf > 1e300\n", n);
    else if (n < -1e300) printf("%lf < -1e300\n", n);
    else printf("-1e300 <= %lf <= 1e300\n", n);
}
