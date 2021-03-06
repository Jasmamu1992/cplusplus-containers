#include <gtest/gtest.h>
#include <string/String.h>
#include <string>

std::string string_input2 = "Hello";

TEST(OPERATOR_STRING, EQUAL_OPERATOR_TEST1) {
    STLContainer::String input1("Hello");
    STLContainer::String input2("Hello");
    ASSERT_TRUE(input1 == input2);
}

TEST(OPERATOR_STRING, NOTEQUAL_OPERATOR_TEST1) {
    STLContainer::String input1("Hello");
    STLContainer::String input2("Hello");
    ASSERT_FALSE(input1 != input2);
}

TEST(OPERATOR_STRING, NOTEQUAL_OPERATOR_TEST2) {
    STLContainer::String input1("Hello");
    STLContainer::String input2("WORLD");
    ASSERT_TRUE(input1 != input2);
}

TEST(OPERATOR_STRING, GREATOR_EQUAL_OPERATOR_TEST1) {
    STLContainer::String input1("Hello");
    STLContainer::String input2("Hello");
    ASSERT_TRUE(input1 >= input2);
}

TEST(OPERATOR_STRING, LESS_EQUAL_OPERATOR_TEST1) {
    STLContainer::String input1("Hello");
    STLContainer::String input2("Hello");
    ASSERT_TRUE(input1 <= input2);
}

TEST(OPERATOR_STRING, GREATOR_OPERATOR_TEST1) {
    STLContainer::String input1("Hello");
    STLContainer::String input2("Hello");
    ASSERT_FALSE(input1 > input2);
}

TEST(OPERATOR_STRING, LESS_OPERATOR_TEST1) {
    STLContainer::String input1("Hello");
    STLContainer::String input2("Hello");
    ASSERT_FALSE(input1 < input2);
}

TEST(OPERATOR_STRING, GREATOR_OPERATOR_TEST2) {
    STLContainer::String input1("Aello");
    STLContainer::String input2("Hello");
    ASSERT_TRUE(input1 < input2);
    ASSERT_FALSE(input1 > input2);
}

TEST(OPERATOR_STRING, GREATOR_EQUAL_OPERATOR_TEST2) {
    STLContainer::String input1("Aello");
    STLContainer::String input2("Hello");
    ASSERT_TRUE(input1 <= input2);
    ASSERT_FALSE(input1 >= input2);
}

TEST(OPERATOR_STRING, ALL_OPERATOR_TEST1) {
    STLContainer::String input1("hello");
    STLContainer::String input2("Hello");
    ASSERT_FALSE(input1 <= input2);
    ASSERT_TRUE(input1 >= input2);
    ASSERT_FALSE(input1 < input2);
    ASSERT_TRUE(input1 > input2);
    ASSERT_FALSE(input1 == input2);
    ASSERT_TRUE(input1 != input2);
}

TEST(OPERATOR_STRING, ALL_OPERATOR_TEST2) {
    STLContainer::String input1("A");
    STLContainer::String input2("a");
    ASSERT_FALSE(input1 == input2);
    ASSERT_TRUE(input1 != input2);
    ASSERT_TRUE(input1 < input2);
    ASSERT_TRUE(input1 <= input2);
    ASSERT_FALSE(input1 > input2);
    ASSERT_FALSE(input1 >= input2);
}