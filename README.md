# Quant C++ Project
C++17 проект для количественного анализа.

## Структура
* `src/` — исходный код библиотеки
* `tests/` — юнит-тесты
* `bench/` — бенчмарки

## Сборка
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j

## Запуск тестов и бенчмарка
ctest --test-dir build --output-on-failure
./build/bench_mathlib

## Документация
[Документация проекта](https://minaev-dev.github.io/quant-cpp-project/)