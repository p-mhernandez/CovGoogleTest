#include <gtest/gtest.h>
#include "goo.h"

// 
TEST(GooTest, TestGetValueWithZero) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "CIC-6");
 
  EXPECT_EQ(getValue(0, 0), 0);
}

// 
TEST(GooTest, TestGetValueWithPositive) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "CIC-5");

  EXPECT_EQ(getValue(5, 5), 25);
}

