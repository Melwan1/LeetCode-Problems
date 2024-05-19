#include <gtest/gtest.h>

#include "removeElement.hh"

TEST(remove_element, empty_vector) {
    std::vector<int> nums = {};
    EXPECT_EQ(removeElement(nums, 0), 0);
}

TEST(remove_element, one_different_element) {
    std::vector<int> nums = { 1 };
    EXPECT_EQ(removeElement(nums, 0), 1);
}

TEST(remove_element, one_same_element) {
    std::vector<int> nums = { 1 };
    EXPECT_EQ(removeElement(nums, 1), 0);
}

TEST(remove_element, all_same_elements) {
    std::vector<int> nums = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EXPECT_EQ(removeElement(nums, 0), 0);
}

TEST(remove_element, all_differents_elements) {
    std::vector<int> nums = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EXPECT_EQ(removeElement(nums, 1), 10);
}

TEST(remove_element, varying_elements) {
    std::vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    EXPECT_EQ(removeElement(nums, 4), 9);
}

TEST(remove_element, many_same_elements) {
    std::vector<int> nums = {0, 0, 1, 0, 1, 2, 0, 1, 2, 3};
    EXPECT_EQ(removeElement(nums, 0), 6);
}

