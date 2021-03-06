#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

Rectangle rect1 (1, 2);
Rectangle rect2 (3, 4);

TEST(RectangleTest, ConstructorWidth) {
    EXPECT_EQ(rect1.get_width(), 1);
}

TEST(RectangleTest, ConstructorHeight) {
    EXPECT_EQ(rect1.get_height(), 2);
}

TEST(RectangleTest, Area1) {
    EXPECT_EQ(rect1.area(), 2);
}

TEST(RectangleTest, Area2) {
    EXPECT_EQ(rect2.area(), 12);
}

TEST(RectangleTest, Perimeter1) {
    EXPECT_EQ(rect1.perimeter(),6);
}

TEST(RectangleTest, Perimeter2) {
    EXPECT_EQ(rect2.perimeter(), 14);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

