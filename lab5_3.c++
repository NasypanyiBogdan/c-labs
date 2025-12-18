#include <iostream>
#include <cmath>
using namespace std;

double exact(double x) {
    return (1 + x * x) / 2 * atan(x) - x / 2;
}

double series_n(double x, int n) {
    double s = 0.0;
    for (int k = 1; k <= n; k++) {
        double term = pow(-1, k + 1) * pow(x, 2 * k + 1) / (4 * k * k - 1);
        s += term;
    }
    return s;
}

double series_eps(double x, double eps) {
    double s = 0.0;
    double term;
    int k = 1;

    do {
        term = pow(-1, k + 1) * pow(x, 2 * k + 1) / (4 * k * k - 1);
        s += term;
        k++;
    } while (fabs(term) > eps);

    return s;
}

int main() {
    double a = 0.0, b = 1.0;
    int k = 6;       
    int n = 5;
    double eps = 0.0001;

    double h = (b - a) / (k - 1);

    cout << "x\tExact\t\tSeries(n)\tSeries(eps)\n";

    for (int i = 0; i < k; i++) {
        double x = a + i * h;

        cout << x << "\t"
             << exact(x) << "\t"
             << series_n(x, n) << "\t"
             << series_eps(x, eps) << endl;
    }

    return 0;
}
