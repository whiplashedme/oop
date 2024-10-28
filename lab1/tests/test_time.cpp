#include <gtest/gtest.h>
#include "../src/convertTo24HourFormat.cpp"

TEST(TimeConversionTest, MidnightCase) 
{
    int input1 = 8;
    int input2 = 30;
    std::string input3 = "pm";
    std::string result = convertTo24HourFormat(input1, input2, input3);
    ASSERT_TRUE(result == "20:30");
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}