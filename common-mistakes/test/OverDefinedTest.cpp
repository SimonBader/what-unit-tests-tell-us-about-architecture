#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/OverDefined.h"

namespace common_mistakes {

using ::testing::AtLeast;
using ::testing::Return;

class ProducerMock : public Producer {
 public:
  MOCK_METHOD(std::vector<int>, Create, (), (override));
};

class ProcessorMock : public Processor {
 public:
  MOCK_METHOD(int, SumUp, (const std::vector<int>&), (override));
};

TEST(OverDefinedTest, SumUp) {
  // arrange
  std::shared_ptr<ProducerMock> producer = std::make_shared<ProducerMock>();
  EXPECT_CALL(*producer, Create()).Times(1).WillOnce(Return(std::vector<int>{10, 20, 30}));
  std::shared_ptr<ProcessorMock> processor = std::make_shared<ProcessorMock>();
  EXPECT_CALL(*processor, SumUp(std::vector<int>{10, 20, 30})).Times(1).WillOnce(Return(60));
  OverDefined sut(producer, processor);

  // act
  int actual = sut.SumUp();

  // assert
  EXPECT_EQ(60, actual);
}

}
