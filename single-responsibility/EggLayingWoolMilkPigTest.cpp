#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "EggLayingWoolMilkPig.h"
#include "One.h"
#include "Two.h"

namespace mbv {

using namespace single_responsibility;
using ::testing::AtLeast;
using ::testing::Return;

class OneMock : public single_responsibility::One {
 public:
  MOCK_METHOD0(Run, bool());
};

class TwoMock : public single_responsibility::Two {
 public:
  MOCK_METHOD0(Run, bool());
};

TEST(EggLayingWoolMilkPigTest, CallTwo) {
  const auto one = std::make_shared<OneMock>();
  const auto two = std::make_shared<TwoMock>();
  EXPECT_CALL(*two, Run()).Times(AtLeast(1)).WillOnce(Return(true));

  EggLayingWoolMilkPig sut(one, two);

  EXPECT_TRUE(sut.IsTwoEven());
};

}
