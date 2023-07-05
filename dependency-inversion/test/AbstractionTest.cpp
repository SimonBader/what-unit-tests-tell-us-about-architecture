#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/Abstraction.h"

namespace dependency_inversion {

using ::testing::AtLeast;
using ::testing::Return;

TEST(SingleClassAppTest, RunShouldHandleSpecificEdgeCase) {
  Abstraction sut;

  EXPECT_EQ(0, sut.Run());
}

}
