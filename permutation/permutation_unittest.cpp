#include <string>
#include "gtest/gtest.h"
#include "permutation.h"

TEST(checkPerm, BasicTests) {
    EXPECT_TRUE (checkPerm("hello", "ehllo", 26));
    EXPECT_TRUE (checkPerm("", "", 26));
    EXPECT_FALSE (checkPerm("", "foo", 26));
    EXPECT_FALSE (checkPerm("world", "worlt", 26));
    EXPECT_FALSE (checkPerm("foobaz", "foobazz", 26));
}