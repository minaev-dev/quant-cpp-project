#include <gtest/gtest.h>
#include "mathlib.hpp"

TEST(MeanTest, Basic) {
    EXPECT_DOUBLE_EQ(mathlib::mean({1.0, 2.0, 3.0}), 2.0);
}

TEST(MeanTest, Empty) {
    EXPECT_DOUBLE_EQ(mathlib::mean({}), 0.0);
}