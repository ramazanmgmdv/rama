#include <stdio.h>
#include "analys.h"

int main() {
    printf("Enter size of massive\n");
    size_t n;
    scanf("%zd", &n);
    double a[n];
    printf("Enter elements\n");
    double t;
    for (size_t i = 0; i < n; ++i) {
        scanf("%lf", &t);
        a[i] = t;
    }
    double avg = average_of_massive(n, a);
    double disp = quadratic(n, a, avg);
    printf("%lf\n", avg);
    printf("%lf\n", disp);
    double *e = a + n;
    const double *p = a;
    while ((p = find_miss(p, e, avg, disp)) != e) {
        printf("%lf\t", *p);
        ++p;
    }

    return 0;
}
