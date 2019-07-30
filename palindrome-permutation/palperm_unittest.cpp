#include <string>
#include "gtest/gtest.h"
#include "palperm.h"

TEST(palPerm, BasicTests) {
    EXPECT_EQ (palPerm(""), "");
    EXPECT_EQ (palPerm("a"), "");
    EXPECT_EQ (palPerm("abc"), "");
    EXPECT_EQ (palPerm("aBc"), "");
}

TEST(genPalPerm, BasicTests) {
    int chars1[] = {2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EXPECT_EQ (genPalPerm(chars1), "abccba");
    int chars2[] = {0, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EXPECT_EQ (genPalPerm(chars2), "bcdedcb");
}