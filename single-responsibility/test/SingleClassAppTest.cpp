#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/SingleClassApp.h"

namespace single_responsibility {

using ::testing::AtLeast;
using ::testing::Return;

TEST(SingleClassAppTest, RunShouldHandleSpecificEdgeCase) {
  User user;
  SingleClassApp sut;

  EXPECT_EQ(-1, sut.Run(user));
}

}
