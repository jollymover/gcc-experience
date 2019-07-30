#include <string>
#include "gtest/gtest.h"
#include "palperm.h"

TEST(urlify, BasicTests) {
    EXPECT_EQ (palPerm(""), "");
    EXPECT_EQ (palPerm("a"), "");
    EXPECT_EQ (palPerm("abc"), "");
    EXPECT_EQ (palPerm("aBc"), "");
    EXPECT_EQ (palPerm("abCaBc"), "abccba");
    EXPECT_EQ (palPerm("Tact Coa"), "actotca");
}