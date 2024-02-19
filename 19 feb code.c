 #include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sine_series(double x, int n) {
    double sine = 0;
    int sign = 1;
    for(int i = 1; i <= n; i += 2) {
        sine += pow(x, i) / factorial(i) * sign;
        sign *= -1;
    }
    return sine;
}

int main() {
    double x;
    int n;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    printf("sin(%lf) = %lf\n", x, sine_series(x, n));
    return 0;
}
