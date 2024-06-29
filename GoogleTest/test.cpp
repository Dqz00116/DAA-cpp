#include "pch.h"

TEST(Chapter1Test, TestSwap)
{
	int x = 5, y = 10;
	daa::swap(x, y);
	EXPECT_EQ(x, 10);
	EXPECT_EQ(y, 5);
}