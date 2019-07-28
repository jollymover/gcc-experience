#include <string>
#include "gtest/gtest.h"
#include "urlify.h"

TEST(urlify, BasicTests) {
    EXPECT_EQ (urlify("hello world"), "hello%20world");
}