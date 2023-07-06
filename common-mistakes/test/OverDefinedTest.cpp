#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/OverDefined.h"

namespace common_mistakes {

using ::testing::AtLeast;
using ::testing::Return;

TEST(SingleClassAppTest, RunShouldHandleSpecificEdgeCase) {
  Abstraction sut;

  EXPECT_EQ(0, sut.Run());
}

}
