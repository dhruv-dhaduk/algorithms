#include <gtest/gtest.h>
extern "C" {
    #include "math/math.h" 
    #include "001_insertion_sort.h"
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

TEST(T_001_INSERTION_SORT, T1) {
    int original[] = {5, 2, 4, 6, 1, 3};
    int sorted[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    insertionSort(original, n);

    for (int i = 0; i < n; i++) {
        EXPECT_EQ(original[i], sorted[i]);
    }
}


TEST(T_001_INSERTION_SORT, T2_ASCENDING_ORDER) {
    int original[] = {1, 2, 3, 4, 5, 6};
    int sorted[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    insertionSort(original, n);

    for (int i = 0; i < n; i++) {
        EXPECT_EQ(original[i], sorted[i]);
    }
}

TEST(T_001_INSERTION_SORT, T3_DESCENDING_ORDER) {
    int original[] = {6, 5, 4, 3, 2, 1};
    int sorted[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    insertionSort(original, n);

    for (int i = 0; i < n; i++) {
        EXPECT_EQ(original[i], sorted[i]);
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

