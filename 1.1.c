#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет значение функции A по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программму
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x = 0.5;
    const double y = -1.34;
    const double z = 5.36;
    printf("a = %.3f\n", A(x, y, z));
    printf("b = %.3f", B(x, y, z));
    return 0;
}

double A(const double x, const double y, const double z)
{
    return x + sin(y) + log(z);
}

double B(const double x, const double y, const double z)
{
    return 1.5 * x + y * y + tan(z) / 3;
}
