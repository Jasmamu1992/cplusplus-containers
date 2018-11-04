#include <gtest/gtest.h>
#include <string/String.h>
#include <string>

std::string string_input = "Hello";

TEST(CREATESTRING, SETANDGET) {
    Container::String input("Hello");
    ASSERT_STREQ(string_input.c_str(), input.c_str());
}

//TEST(CREATESTRING, POINTER_OPERATOR_TEST) {
//
//    Container::String input("Hello");
//    ASSERT_STREQ(string_input.c_str(), input);
//}

TEST(CREATESTRING, MOVE_TEST) {

    Container::String input1("Hello");
    Container::String input2 = std::move(input1);
    ASSERT_STREQ(string_input.c_str(), input2.c_str());
}

TEST(CREATESTRING, ASSIGN_LIKE_ARRAY_TEST) {
    Container::String input1("Hello");
    input1[0] = 'W';
    ASSERT_STREQ("Wello", input1.c_str());
}

