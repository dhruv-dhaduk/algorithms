#include <gtest/gtest.h>
extern "C" {
    #include "math/math.h" 
}

TEST(Math, Add) {
    EXPECT_EQ(add(10, 30), 40);
    EXPECT_EQ(add(20, 30), 50);
    EXPECT_EQ(add(20, 20), 40);
}

TEST(Math, Substract) {
    EXPECT_EQ(substract(10, 30), -20);
    EXPECT_EQ(substract(40, 30), 10);
    EXPECT_EQ(substract(20, 20), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

