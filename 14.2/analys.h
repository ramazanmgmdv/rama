#ifndef LABA142_ANALYS_H
#define LABA142_ANALYS_H

#include <stdlib.h>
#include "math.h"

/**
 * Функция, вычисляющая сумму массива
 * @param n длина массива
 * @param a массив
 * @return Сумму массива
 */
double sum_of_massive(size_t n, const double *a);

/**
 * Функция, находящая среднее арифметическое массива
 * @param n длина массива
 * @param a массив
 * @return Сумма массива
 */
double average_of_massive(size_t n, const double *a);

/**
 * Функция, находящая несмещенную оценку среднеквадратического отклонения элемента
 * @param n длина массива
 * @param a массив
 * @param x элемент
 * @return Оценка среднеквадратического отклонения элемента
 */
double quadratic(size_t n, const double *a, double x);

/**
 * Возвращает указатель на первый элемент, являющийся промахом в массиве начиная с элемента x
 * @param x Элемент, начиная с которого идет проверка
 * @param e Значение возвращаемое если нет промахов
 * @param avg Среднее арифметическое массива
 * @param disp Дисперсия массива
 * @return указатель на промах
 */
const double *find_miss(const double *x, const double *e, double avg, double disp);

#endif //LABA142_ANALYS_H
