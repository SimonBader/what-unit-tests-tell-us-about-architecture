#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/Abstraction.h"

namespace dependency_inversion {

using ::testing::AtLeast;
using ::testing::Return;

TEST(AbstractionTest, Run) {
  Abstraction sut;

  EXPECT_EQ(0, sut.Run());
}

}
