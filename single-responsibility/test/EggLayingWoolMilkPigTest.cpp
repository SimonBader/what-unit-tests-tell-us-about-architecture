#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/EggLayingWoolMilkPig.h"

namespace single_responsibility {

using ::testing::AtLeast;
using ::testing::Return;

class OneMock : public One {
 public:
  MOCK_METHOD(bool, IsFirst, (), (override));
};

class TwoMock : public Two {
 public:
  MOCK_METHOD(bool, IsEven, (), (override));
};

class ThreeMock : public Three {
 public:
  MOCK_METHOD(bool, IsFibonacci, (), (override));
};

class FourMock : public Four {
 public:
  MOCK_METHOD(bool, ContainsEnoughEdgesForSquare, (), (override));
};

TEST(EggLayingWoolMilkPigTest, CallOne) {
  // arrange
  std::shared_ptr<OneMock> one = std::make_shared<OneMock>();
  EXPECT_CALL(*one, IsFirst()).WillOnce(Return(true));
  EggLayingWoolMilkPig sut(
      one,
      std::make_shared<TwoMock>(),
      std::make_shared<ThreeMock>(),
      std::make_shared<FourMock>());

  // act
  bool actual = sut.CallOne();

  // assert
  EXPECT_TRUE(actual);
}

TEST(EggLayingWoolMilkPigTest, DoEverything) {
  // arrange
  std::shared_ptr<OneMock> one = std::make_shared<OneMock>();
  std::shared_ptr<TwoMock> two = std::make_shared<TwoMock>();
  std::shared_ptr<ThreeMock> three = std::make_shared<ThreeMock>();
  std::shared_ptr<FourMock> four = std::make_shared<FourMock>();
  EXPECT_CALL(*one, IsFirst()).WillOnce(Return(true));
  EXPECT_CALL(*two, IsEven()).WillOnce(Return(true));
  EXPECT_CALL(*three, IsFibonacci()).WillOnce(Return(true));
  EXPECT_CALL(*four, ContainsEnoughEdgesForSquare()).WillOnce(Return(true));
  EggLayingWoolMilkPig sut(one, two, three, four);

  // act
  std::string result = sut.DoEverything();

  // assert
  EXPECT_EQ("right", result);
}

}
