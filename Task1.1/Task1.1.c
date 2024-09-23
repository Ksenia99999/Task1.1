#include <math.h>
#include <stdio.h>

/**
 * @brief функция для вычисления значения a
 * param x  значение переменной x
 * param y  значение переменной y
 * param z  значение переменной z
 * @return  результат вычисления a
 */
double f_a(const double x, const double y, const double z);
/**
 * @brief функция для вычисления значения a
 * param x  значение переменной x
 * param y  значение переменной y
 * param z  значение переменной z
 * @return  результат вычисления a
 */
double f_b(const double x, const double y, const double z);
/**
 * @brief точка входа в программу
 * @return в случае успеха
 */
int main()
{
    const double x = 1.4;
    const double y = 3.1;
    const double z = 0.5;

    double a = f_a(x, y, z);
    double b = f_b(x, y, z);

    printf("%f %f", a, b);
    return 0;

}
double f_a(const double x, const double y, const double z)
{
    return (sqrt(z * x * sin(2 * x) + (exp(x * (-2)) * (x + y))));
}
double f_b(const double x, const double y, const double z)
{
    return (exp(2*x) * log(z+x) - pow(y,3*x)*log(y-x));
}
