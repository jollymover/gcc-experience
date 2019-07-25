#include "gtest/gtest.h"
#include "hello.h"

TEST(HelloTest, ExitCodeOne) {
    EXPECT_EQ (1, Hello());
}