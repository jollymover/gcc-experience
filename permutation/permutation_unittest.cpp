#include <string>
#include "gtest/gtest.h"
#include "permutation.h"

TEST(checkPerm, ascii) {
    EXPECT_TRUE (checkPerm("", ""));
    EXPECT_TRUE (checkPerm("h", "h"));
    EXPECT_TRUE (checkPerm("hello", "ehllo"));
    EXPECT_FALSE (checkPerm("", "foo"));
    EXPECT_FALSE (checkPerm("world", "worlt"));
    EXPECT_FALSE (checkPerm("foobaz", "foobazz"));
    EXPECT_TRUE (checkPerm("H", "H"));
    EXPECT_TRUE (checkPerm("Hello", "eHllo"));
    EXPECT_TRUE (checkPerm("HELLO", "EHLLO"));
}

TEST(checkPerm, utf) {
    EXPECT_TRUE (checkPerm("П", "П"));
    EXPECT_TRUE (checkPerm("привет", "рпивет"));
    EXPECT_TRUE (checkPerm("Привет", "рПивет"));
}