#include "analys.h"

double sum_of_massive(size_t n, const double *a) {
    double sum = 0;
    const double *t = a;
    for (; t < a + n; ++t) {
        sum += *t;
    }
    return sum;
}

double average_of_massive(size_t n, const double *a) {
    return sum_of_massive(n, a) / n;
}

double quadratic(size_t n, const double *a, double x) {
    double s = 0;
    const double *t = a;
    for (; t < a + n; ++t) {
        s += (x - *(t)) * (x - *(t));
    }
    s = sqrt(s);
    s = s / (n - 1);
    return s;


}

const double *find_miss(const double *x, const double *e, double avg, double disp) {
    for (; *(x) != *e; ++x) {
        if (fabs(*x - avg) > disp) {
            return x;
        }

    }
    return e;
}