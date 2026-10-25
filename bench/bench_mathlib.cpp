#include <benchmark/benchmark.h>
#include <vector>
#include "mathlib.hpp"

static void BM_Mean(benchmark::State& state) {
    std::vector<double> v(state.range(0), 1.5);
    for (auto _ : state) {
        benchmark::DoNotOptimize(mathlib::mean(v));
    }
}

BENCHMARK(BM_Mean)->Arg(1000)->Arg(100000);