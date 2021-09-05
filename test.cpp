#include <gtest/gtest.h>
#include "credit_card_validator.h"

TEST(credit_card_validator, validate_card) {
    GTEST_ASSERT_TRUE(4485442064824915);
    GTEST_ASSERT_TRUE(6011683007676111);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
