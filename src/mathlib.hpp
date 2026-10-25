#pragma once
#include <vector>
namespace mathlib {
/// Среднее значение элементов вектора. Для пустого вектора возвращает 0.
double mean(const std::vector<double>& v);
}