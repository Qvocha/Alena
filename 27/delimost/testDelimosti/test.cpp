#include "pch.h"
#include "..//delimost/delimost.h"

TEST(NumericalTests, FactorialTest1) {
  EXPECT_EQ(120, factorial(5));
}
TEST(NumericalTests, FactorialTest2) {
	EXPECT_EQ(24, factorial(4));
}
TEST(NumericalTests, FactorialTest3) {
	EXPECT_EQ(7, factorial(3));
}
TEST(NumericalTests, FactorialTest4) {
	EXPECT_EQ(120, factorial(8));
}