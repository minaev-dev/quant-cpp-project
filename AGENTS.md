# AGENTS.md

## Назначение
C++17 проект для количественного анализа. Библиотека в src/, тесты в tests/, бенчмарк в bench/.

## Команды
Сборка: cmake -B build -DCMAKE_BUILD_TYPE=Release && cmake --build build -j
Тесты: ctest --test-dir build --output-on-failure
Бенчмарк: ./build/bench_mathlib

## Правила кода
С++17, имена функций в snake_case, типы в CamelCase, комментарии Doxygen (///) для публичного API.
Новый код покрывается unit-тестом.

## Ограничения
Перед завершением задачи собери проект и запусти тесты.
Не меняй CI/CD (.github/workflows) без запроса.
Не добавляй зависимости без запроса.