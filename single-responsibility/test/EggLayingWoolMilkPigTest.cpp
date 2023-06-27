#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/EggLayingWoolMilkPig.h"

namespace single_responsibility {

using ::testing::AtLeast;
using ::testing::Return;

class OneMock : public One {
 public:
  MOCK_METHOD(bool, IsFirst, ());
};

class TwoMock : public Two {
 public:
  MOCK_METHOD(bool, IsEven, ());
};

class ThreeMock : public Three {
 public:
  MOCK_METHOD(bool, IsFibonacci, ());
};

TEST(EggLayingWoolMilkPigTest, IsOneFirstShouldBeTrue) {
  std::shared_ptr<OneMock> one = std::make_shared<OneMock>();
  EXPECT_CALL(*one, IsFirst()).WillRepeatedly(Return(true));

  EggLayingWoolMilkPig sut(one, std::make_shared<TwoMock>(), std::make_shared<ThreeMock>());

  EXPECT_TRUE(sut.IsOneFirst());
}

TEST(EggLayingWoolMilkPigTest, DoAllTogetherShouldBeRight) {
  std::shared_ptr<OneMock> one = std::make_shared<OneMock>();
  std::shared_ptr<TwoMock> two = std::make_shared<TwoMock>();
  std::shared_ptr<ThreeMock> three = std::make_shared<ThreeMock>();
  EXPECT_CALL(*one, IsFirst()).Times(AtLeast(1)).WillRepeatedly(Return(true));
  EXPECT_CALL(*two, IsEven()).Times(AtLeast(1)).WillRepeatedly(Return(true));
  EXPECT_CALL(*three, IsFibonacci()).Times(AtLeast(1)).WillRepeatedly(Return(true));

  EggLayingWoolMilkPig sut(one, two, three);

  EXPECT_EQ("right", sut.DoAllTogether());
}

}
